/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/04/02 11:11:21 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
# include <exception>
# include <algorithm>
# include <iomanip>
# include <limits>

BitcoinExchange::BitcoinExchange()	{}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & ref )	{(void)ref;}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange & ref )	{(void)ref; return *this;}

BitcoinExchange::~BitcoinExchange()	{}

void	BitcoinExchange::printClass()	{
	std::map<std::string, double>::iterator	it = this->_data.begin();
	std::map<std::string, double>::iterator	ite = this->_data.end();
	for (; it != ite; it++ )	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}

void	BitcoinExchange::makePair( std::string l )	{
	std::size_t	dPos = l.find(',');
	if (dPos == std::string::npos)
		throw std::invalid_argument(DATE_ERROR_DB);
	if (dPos + 1 == l.size())
		throw std::invalid_argument(RATE_ERROR_DB);
	std::string	dDb = l.substr(0, dPos);
	if (!this->checkDateForm(dDb))
		throw std::invalid_argument(DATE_ERROR_DB);
	double	rate = strtod(l.substr(dPos + 1, l.size()).c_str(), NULL);
	this->_data[dDb] = (rate);
}

unsigned int	BitcoinExchange::checkDateDigits( std::string d, int t )	{
	for (unsigned int i = 0; i + 1 < d.size(); i++)
		if (!isdigit(d.c_str()[i]))
			return ERROR;
	if (t == YEAR && (d.size() != 4 || (atoi(d.c_str()) < 0)))
		return ERROR;
	else if (t == MONTH && (d.size() != 2 || (atoi(d.c_str()) < 0 || atoi(d.c_str()) > 12)))
		return ERROR;
	else if (t == DAY &&  (d.size() != 2 || (atoi(d.c_str()) < 0 || atoi(d.c_str()) > 31)))
		return ERROR;
	return SUCCESS;
}

unsigned int		BitcoinExchange::checkDateForm( std::string d )	{
	int	yr = d.find('-');
	std::string year = d.substr(0, yr);
	int mth = d.find('-', ++yr);
	std::string month = d.substr(yr, mth - yr);
	std::string day = d.substr(++mth, d.size());
	if (!this->checkDateDigits(year, YEAR) \
	|| !this->checkDateDigits(month, MONTH) \
	|| !this->checkDateDigits(day, DAY))
		return ERROR;
	return SUCCESS;
}

void	BitcoinExchange::printBitcoinRate( std::string l)	{
	std::size_t	f = l.find('|');
	if (f == std::string::npos)
		throw std::invalid_argument("btc: Error: bad input");
	std::string	date = l.substr(0, f);
	date.erase(remove_if(date.begin(), date.end(), isspace), date.end());
	if ((l.size() - (f + 1)) <= 1)
		throw std::invalid_argument("btc: Error: no argument for value");
	double		val = strtod(l.substr(f + 1, l.size()).c_str(), NULL);
	if (val < 0)
		throw std::underflow_error("btc: Error: not a positive number");
	if (val > 1000)
		throw std::overflow_error("btc: Error: number is too large");
	if (!this->checkDateForm(date))
		throw std::invalid_argument("btc: Error: invalid date format");
	std::map<std::string, double>::iterator dDR = this->searchDataBase(date);
	double res = val * dDR->second;
	std::cout << "btc: [" << date << "] => " << std::fixed << std::setprecision(2) << val << " = " << res << std::endl;
}

std::map<std::string, double>::iterator	BitcoinExchange::searchDataBase( std::string d )	{
	std::map<std::string, double>::iterator	it = this->_data.begin();
	std::map<std::string, double>::iterator	ite = this->_data.end();
	std::map<std::string, double>::iterator	closest = it;
	if (it->first > d)
		return it;
	it = this->_data.find(d);
	if (it != ite)
		return it;
	for (it = this->_data.begin(); it != ite; it++)	{
		if (it->first > closest->first && closest->first < d)
			closest = it;
		if (closest->first > d)
			break ;
	}
	if (it != ite)
		return --closest;
	return --ite;
}

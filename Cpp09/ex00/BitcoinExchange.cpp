/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/29 23:32:13 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
# include <exception>
# include <algorithm>

BitcoinExchange::BitcoinExchange()	{}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & ref )	{(void)ref;}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange & ref )	{(void)ref; return *this;}

BitcoinExchange::~BitcoinExchange()	{}

void	BitcoinExchange::makePair( std::string l )	{
	int	f = l.find(',');
	this->_data[l.substr(0, f)] = strtof(l.substr(f + 1, l.size()).c_str(), NULL);
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

void	BitcoinExchange::printBitcoinRate( std::string l, int p )	{
	std::size_t	f = l.find('|');
	if (f == std::string::npos)
		throw std::invalid_argument("btc: Error: bad input");
	std::string	date = l.substr(0, f);
	date.erase(remove_if(date.begin(), date.end(), isspace), date.end());
	if ((l.size() - (f + 1)) <= 1)
		throw std::invalid_argument("btc: Error: no argument for value");
	float		val = strtof(l.substr(f + 1, l.size()).c_str(), NULL);
	if (val < 0)
		throw std::underflow_error("btc: Error: not a positive number");
	if (val > 1000)
		throw std::overflow_error("btc: Error: number is too large");
	if (!this->checkDateForm(date))
		throw std::invalid_argument("btc: Error: invalid date format");
	std::map<std::string, float>::iterator dDR = this->searchDataBase(date);
	std::cout << "btc: [" << date << "] =>" << val << " = " << val * dDR->second << std::endl;
	(void)p;
}


std::map<std::string, float>::iterator	BitcoinExchange::searchDataBase( std::string d )	{
	std::map<std::string, float>::iterator	it = this->_data.begin();
	std::map<std::string, float>::iterator	ite = this->_data.end();
	std::map<std::string, float>::iterator	closest = it;
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

void	BitcoinExchange::printClass()	{
	std::map<std::string, float>::iterator	it = this->_data.begin();
	std::map<std::string, float>::iterator	ite = this->_data.end();

	for (; it != ite; it++ )	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}


// 2011-01-03 => 3 = 0.9
// 2011-01-03 => 2 = 0.6
// 2011-01-03 => 1 = 0.3
// 2011-01-03 => 1.2 = 0.36
// 2011-01-09 => 1 = 0.32
// Error: not a positive number.!!!
// Error: bad input => 2001-42-42
// 2012-01-11 => 1 = 7.1
// Error: too large a number.

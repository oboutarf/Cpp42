/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/28 01:28:31 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
# include <exception> 

BitcoinExchange::BitcoinExchange()	{}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & ref )	{
	(void)ref;
}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange & ref )	{
	(void)ref; return *this;
}

BitcoinExchange::~BitcoinExchange()	{}

void	BitcoinExchange::makePair( std::string l )	{
	int	f = l.find(',');
	this->_data[l.substr(0, f)] = strtof(l.substr(f + 1, l.size()).c_str(), NULL);
}

unsigned int		BitcoinExchange::checkDateForm( std::string d )	{

	int	yr = d.find('-');
	std::string year = d.substr(0, yr);
	int mth = d.find('-', ++yr);
	std::string month = d.substr(yr, mth - yr);
	std::string day = d.substr(++mth, d.size());
	std::cout << year << "-" << month << "-" << day << std::endl;
	return (1);
}

void	BitcoinExchange::printBitcoinRate( std::string l, int p )	{
	std::size_t	f = l.find('|');
	if (f == std::string::npos)
		throw std::invalid_argument("btc: Error: bad input");
	std::string	date = l.substr(0, f);
	float		val = strtof(l.substr(f + 1, l.size()).c_str(), NULL);
	if (val < 0)
		throw std::underflow_error("btc: Error: not a positive number");
	if (val > 1000)
		throw std::overflow_error("btc: Error: number is too large");
	if (!this->checkDateForm(date))
		throw std::invalid_argument("btc: Error: invalid date format");
	// this->searchDataBase(date);
	(void)p;
}

std::string	BitcoinExchange::searchDataBase( std::string d )	{
	return d;
}

void	BitcoinExchange::printClass()	{
	std::map<std::string, float>::iterator	it = this->_data.begin();
	std::map<std::string, float>::iterator	ite = this->_data.end();

	for (; it != ite; it++ )	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}



// $> ./btc input.txt
// 2011-01-03 => 3 = 0.9
// 2011-01-03 => 2 = 0.6
// 2011-01-03 => 1 = 0.3
// 2011-01-03 => 1.2 = 0.36
// 2011-01-09 => 1 = 0.32

// Error: not a positive number.

// Error: bad input => 2001-42-42
// 2012-01-11 => 1 = 7.1

// Error: too large a number.

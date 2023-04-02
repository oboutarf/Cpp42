/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:13 by oboutarf          #+#    #+#             */
/*   Updated: 2023/04/02 11:12:34 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cctype>
# include <cstdlib>
# include <map>

# define DATE_ERROR_DB "btc: Error: invalid date format in data base"
# define RATE_ERROR_DB "btc: Error: invalid rate has been detected in data base"

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1
# define SUCCESS 1
# define ERROR 0

# define YEAR 0
# define MONTH 1
# define DAY 2

class BitcoinExchange	{

public:
	BitcoinExchange();
	BitcoinExchange( const BitcoinExchange & ref );
	~BitcoinExchange();

	BitcoinExchange &						operator=( const BitcoinExchange & rhs );

	std::map<std::string, double>::iterator	searchDataBase( std::string d );
	unsigned int							checkDateForm( std::string d );
	unsigned int							checkDateDigits( std::string d, int t );
	void									printBitcoinRate( std::string l);
	void									makePair( std::string l );
	void									printClass();

private:
	std::map<std::string, double>	_data;

};

#endif
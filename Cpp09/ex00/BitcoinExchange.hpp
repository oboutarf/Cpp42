/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:13 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/27 22:16:12 by oboutarf         ###   ########.fr       */
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

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

class BitcoinExchange	{

public:
	BitcoinExchange();
	BitcoinExchange( const BitcoinExchange & ref );
	~BitcoinExchange();

	BitcoinExchange &	operator=( const BitcoinExchange & rhs );

	void				makePair( std::string l );
	void				printBitcoinRate( std::string l, int p );
	std::string			searchDataBase( std::string d );
	unsigned int		checkDateForm( std::string d );
	void				printClass();

private:
	std::map<std::string, float>	_data;

};

#endif
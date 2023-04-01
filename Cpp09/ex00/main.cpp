/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:05 by oboutarf          #+#    #+#             */
/*   Updated: 2023/04/01 12:06:44 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char** av)	{
	BitcoinExchange	base;
	if ( ac != 2 )
		return std::cerr << "btc: invalid number of arguments [ ./btc <file> ]" << std::endl, EXIT_FAILURE;
	std::ifstream	in_data;
	std::ifstream	in_input;
	in_data.open("data.csv", std::ios::in);
	if (in_data.fail())
		return std::cout << "btc: bad input fd, aborted process, check the rights of your file.csv before relaunch" << std::endl, EXIT_FAILURE;
	std::string	line;
	while (std::getline(in_data, line))	{
		if (isdigit(line.c_str()[0]))
			
void	BitcoinExchange::printClass()	{
	std::map<std::string, double>::iterator	it = this->_data.begin();
	std::map<std::string, double>::iterator	ite = this->_data.end();

	for (; it != ite; it++ )	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}

void	BitcoinExchange::printClass()	{
	std::map<std::string, double>::iterator	it = this->_data.begin();
	std::map<std::string, double>::iterator	ite = this->_data.end();

	for (; it != ite; it++ )	{
		std::cout << it->first << ", " << it->second << std::endl;
	}
}

	}
	in_data.close();
	in_input.open (av[1], std::ios::in);
	if (in_input.fail())
		return std::cout << "btc: bad input fd, aborted process, check the rights of your file.txt before relaunch" << std::endl, EXIT_FAILURE;
	int	p = 0;
	while (std::getline(in_input, line))	{
		try	{
			if (p++)
				base.printBitcoinRate(line, p);
		}
		catch (const std::exception& e)	{
			std::cerr << e.what();
			std::cerr << ", occured at line " << p << "." << std::endl;
		}
	}
	in_input.close();
	return EXIT_SUCCESS;
}

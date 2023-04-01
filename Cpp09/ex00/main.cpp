/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:05 by oboutarf          #+#    #+#             */
/*   Updated: 2023/04/01 22:47:35 by oboutarf         ###   ########.fr       */
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
		return std::cout << "btc: bad input fd, aborted process, check the rights of your data.csv or if the file exists" << std::endl, EXIT_FAILURE;
	std::string	line;
	while (std::getline(in_data, line))	{
		if (isdigit(line.c_str()[0]))	{
			try	{	base.makePair(line);	}
			catch (std::exception & e)	{
				return std::cout << e.what() << std::endl, in_data.close(), EXIT_FAILURE;
			}
		}
	}
	in_data.close();
	in_input.open (av[1], std::ios::in);
	if (in_input.fail())
		return std::cout << "btc: bad input fd, aborted process, check the rights of your file" << std::endl, EXIT_FAILURE;
	int	p = 0;
	while (std::getline(in_input, line))	{
		try	{
			if (p++)
				base.printBitcoinRate(line);
		}
		catch (const std::exception& e)	{
			std::cerr << e.what();
			std::cerr << ", occured at line " << p << "." << std::endl;
		}
	}
	in_input.close();
	return EXIT_SUCCESS;
}

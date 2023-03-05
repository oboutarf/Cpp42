/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:10:52 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 20:51:22 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

bool	checkInput( std::string input )	{

	if ( !input.size() )
		return ( FAIL );
	if ( input.compare( "DEBUG" ) \
	&&	input.compare( "INFO" ) \
	&&	input.compare( "WARNING" ) \
	&&	input.compare( "ERROR" ))
		return ( std::cout \
		<< std::endl << BAD_INPUT \
		<< std::endl << INPUTS \
		<< std::endl, FAIL );
	return ( SUCCESS );

}

int	main( void )	{

	std::string	input;
	Harl		Harl;

	while (42)	{

		std::cout << std::endl << "Enter complain type: ";
		std::getline(std::cin, input );
		if ( checkInput( input ) )
			break ;
		if ( std::cin.eof() )
			return ( std::cout << "See you!" << std::endl, EXIT_SUCCESS );
	}
	std::cout << std::endl;
	Harl.complain( input );
	std::cout << std::endl;
	return ( EXIT_SUCCESS );

}

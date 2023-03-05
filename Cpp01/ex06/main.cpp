/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:04:04 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 20:04:30 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	searchLevel( std::string argLevel )	{

	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for ( int i = 0; i < 4; i++ )
		if (!levels[i].compare(argLevel))
			return ( i );
	return ( -1 );

}

int	main( int ac, char **av )	{

	if ( ac != 2 )
		return ( std::cout << INVALID_ARG << std::endl, EXIT_FAILURE );
	Harl	Filter;
	switch( searchLevel( std::string(av[1]) ) )	{

		case 0 :
			Filter.complain( "DEBUG" );
		case 1 :
			Filter.complain( "INFO" );
		case 2 :
			Filter.complain( "WARNING" );
		case 3 :
			Filter.complain( "ERROR" );
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	}
	return ( EXIT_SUCCESS );

}
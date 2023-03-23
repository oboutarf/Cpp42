/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/03/23 21:22:48 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"
# include <typeinfo>
# include <cmath>
# include <stdlib.h> 
# include <unistd.h>

int	main( void )	{
	std::cout << std::endl;
	std::string 	usrInput;
	char c;

	while (1)
	{
		std::cout << "converter: Please enter a value:" << std::endl << "->  ";
		std::cin >> usrInput;
		Convert	converter( usrInput );
		if (std::cin.eof())
			break ;
		if ( converter.detectType() < 5 )
			if ( !converter.convertTypes() )
				break ;
		std::cout << "converter: press SPACE to continue" << std::endl;
		while ( read( STDIN_FILENO, &c, 1 ) && c != ' ' )
			( void )c;
		system("clear");
	}
	std::cout << std::endl;
	return ( EXIT_SUCCESS );
}

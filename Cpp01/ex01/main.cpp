/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:32:53 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 19:21:01 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	CheckInput( std::string str )	{

	if (!str.size())
		return ( FAIL );
	for ( int i = 0; str[i]; i++ )
		if (!isdigit(str[i]))
			return ( std::cout << ERR_DIGIT << std::endl, FAIL );
	return ( SUCCESS );
}

int	main( void )	{

	std::string	userInput;
	while (42)	{

		std::cout << GET_INPUT;
		std::getline( std::cin, userInput );
		if ( std::cin.eof() )
			return ( std::cout << "Goodbye" << std::endl, EXIT_SUCCESS );
		if (CheckInput( userInput ))
			break ;
	}
	char	*ConVert = ( char * )( userInput.c_str() );
	int N = atol( ConVert );
	if ( N < 0 )
		return ( EXIT_SUCCESS );
	Zombie	*zHorde = zombieHorde( N, "zGang" );
	if ( !zHorde )
		return ( std::cerr << "zHorde: 'new' failed" << std::endl, EXIT_FAIL );
	for ( int i = 0; i < N; i++ )
		zHorde[i].announce();
	delete[] zHorde;
	return ( EXIT_SUCCESS );

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:23:23 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/22 20:16:30 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

static int	randSeed = 0;

Base *	generate( void )	{
	srand( time( 0 ) + randSeed );
	randSeed++;
	int	prob = rand() % 3;
	std::cout << randSeed << std::endl;
	if ( !prob )
		return ( new A );
	else if ( prob == 1 )
		return ( new B ); 
	return ( new C );
}

void	identify( Base & p )	{
	(void)p;
}

void	identify( Base * p )	{
	(void)p;
}

Base::~Base( void )	{
	std::cout << "base: a destructor was called" << std::endl;
}


int	main( void )	{

	generate();
	return EXIT_SUCCESS ;
}

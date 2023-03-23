/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:29:07 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 21:35:27 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

static int	randSeed = 0;

Base *	generate( void )	{
	srand( time( 0 ) + randSeed );
	randSeed++;
	int	prob = rand() % 3;
	if ( !prob )
		return ( std::cout << std::endl << "baseType: generating derived class A from Base" << std::endl,  new A );
	else if ( prob == 1 )
		return ( std::cout << std::endl << "baseType: generating derived class B from Base" << std::endl, new B ); 
	return ( std::cout << std::endl << "baseType: generating derived class C from Base" << std::endl, new C );
}

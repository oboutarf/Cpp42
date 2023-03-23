/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:23:23 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 21:40:37 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base( void )	{
	std::cout << "baseType: a destructor was called" << std::endl;
}

int	main( void )	{
	Base *baseCenter = generate();
	std::cout << std::endl << "baseType: Let's identify the type returned from the random generator with pointer" << std::endl;
	identify( *baseCenter );
	std::cout << std::endl << "baseType: Let's identify the type returned from the random generator with reference this time!" << std::endl;
	identify( baseCenter );
	delete baseCenter;

	std::cout << std::endl << "baseType: We generate a WrongClass and try to identify it's type" << std::endl;
	WrongClass	unknown;
	std::cout << std::endl << "baseType: Let's identify with pointer" << std::endl;
	identify( unknown );
	std::cout << std::endl << "baseType: Let's identify with reference this time!" << std::endl;
	identify( &unknown );

	return EXIT_SUCCESS ;
}

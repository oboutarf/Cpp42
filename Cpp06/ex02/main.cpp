/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:23:23 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 03:05:40 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

static int	randSeed = 0;

Base *	generate( void )	{
	srand( time( 0 ) + randSeed );
	randSeed++;
	int	prob = rand() % 3;
	if ( !prob )
		return ( std::cout << "baseType: generating derived class A from Base" << std::endl,  new A );
	else if ( prob == 1 )
		return ( std::cout << "baseType: generating derived class B from Base" << std::endl, new B ); 
	return ( std::cout << "baseType: generating derived class C from Base" << std::endl, new C );
}

/* @ start transmission -- possible to catch exception with */
void	identify( Base & p )	{
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "baseType: hello i'm base (a) and my adress is: " << &a << std::endl;
		return ;
	}
	catch ( std::exception & e )	{
	}
	try {
		B &b= dynamic_cast<B&>(p);
		std::cout << "baseType: hello i'm base (b) and my adress is: " << &b << std::endl;
		( void )b;
		return ;
	}
	catch ( std::exception & e )	{
	}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "baseType: hello i'm base (c) and my adress is: " << &c << std::endl;
		( void )c;
		return ;
	}
	catch ( const std::exception& e )	{
		std::cout << "baseType: Unknown type!" << std::endl;
	}
}


void	identify( Base * p )	{
	if ( A* a = dynamic_cast<A*>( p ) )	{
		std::cout << "baseType: hello i'm base (a) " << std::endl;
		return ;
	}
	if ( B* b = dynamic_cast<B*>( p ) )	{
		std::cout << "baseType: hello i'm base (b) " << std::endl;
		return ;
	}
	if ( C* c = dynamic_cast<C*>( p ) )	{
		std::cout << "baseType: hello i'm base (c) " << std::endl;
		return ;
	}
	std::cout << "baseType: unknown type, sorry." << std::endl;

}

Base::~Base( void )	{
	std::cout << "baseType: a destructor was called" << std::endl;
}


int	main( void )	{
	Base *baseCenter = generate();
	identify( *baseCenter );

	delete baseCenter;

	return EXIT_SUCCESS ;
}

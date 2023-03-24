/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identity.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:29:09 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 23:21:55 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

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

void	identify( Base * p )	{ // if null go to the next check
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
	std::cout << "baseType: Unknown type!" << std::endl;

}

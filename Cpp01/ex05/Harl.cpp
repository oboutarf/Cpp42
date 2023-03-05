/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:15:36 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 20:59:29 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()	{

	harlComplainer[0] = &Harl::debug;
	harlComplainer[1] = &Harl::info;
	harlComplainer[2] = &Harl::warning;
	harlComplainer[3] = &Harl::error;

	std::cout << "Harl Constructor has been called" << std::endl;
}

void 	Harl::complain( std::string level )	{

	std::string	tab[] =	{ "DEBUG", "INFO", "WARNING", "ERROR" };
	for ( int i = 0; i < 4; i++ )
		(!tab[i].compare( level ) ? (this->*harlComplainer[i])() :  (void)i );

}

void	Harl::error( void )	{

	std::cout << ERROR << std::endl;

}

void	Harl::debug( void )	{

	std::cout << DEBUG << std::endl;

}

void	Harl::info( void )	{

	std::cout << INFO << std::endl;

}

void	Harl::warning( void )	{

	std::cout << WARNING << std::endl;

}

Harl::~Harl()	{

	std::cout << "Harl Destructor has been called" << std::endl;

}

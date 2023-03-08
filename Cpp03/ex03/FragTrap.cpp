/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 07:17:35 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 07:29:26 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************************** */
/*                                Color Manager                               */
/* ************************************************************************** */

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");

/* ************************************************************************** */
/*                           Class ScavTrap Manager                           */
/* ************************************************************************** */

/* **@ Default Constructor ************************************************** */

FragTrap::FragTrap( void ) : \
	ClapTrap( "", 100, 100, 30)	{

	std::cout \
	<< "FragTrapper: Default Constructor has been called" \
	<< std::endl;

}

/* **@ Copy Constructor ***************************************************** */

FragTrap::FragTrap( FragTrap& src )	{

	*this = src;

	std::cout \
	<< "FragTrapper: Copy Constructor " \
	<< "\033[0;36m" \
	<< recupName() \
	<< "\033[0m" \
	<< " has been called" \
	<< std::endl;

}

/* **@ Constructor taking 'id' as parameter ********************************* */

FragTrap::FragTrap( std::string id ) : \
	ClapTrap( id, 100, 100, 30)	{

	std::cout \
	<< "FragTrapper: " \
	<< "\033[0;36m" \
	<< recupName() \
	<< "\033[0m" \
	<< " Copy Constructor has been called" \
	<< std::endl;

}

/* **@ Assignement Operator Overload **************************************** */

FragTrap&	FragTrap::operator=( const FragTrap& rhs )	{

	ClapTrap::operator=( rhs );

	std::cout \
	<< "FragTrapper: Assignement Operator Overload has been called" \
	<< std::endl;

	return ( *this );

}

/* **@ Default Destructor  ************************************************** */

FragTrap::~FragTrap( void )	{

	std::cout \
	<< "FragTrapper: " \
	<< "\033[1;31m" \
	<< recupName() \
	<< "\033[0m" \
	<< " Destructor has been called" \
	<< std::endl;

}

void	FragTrap::highFivesGuys( void )	{

	std::cout \
	<< "FragTrapper: " \
	<< "\033[1;33m" \
	<< recupName() \
	<< "\033[0m" \
	<<  " is asking for a general High-Five!" \
	<< std::endl;

}

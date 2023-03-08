/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 06:03:47 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 23:15:21 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

ScavTrap::ScavTrap( void ) : \
	ClapTrap( "", 100, 50, 20)	{

	std::cout \
	<< "ScavTrapper: Default Constructor has been called" \
	<< std::endl;

}

/* **@ Copy Constructor ***************************************************** */

ScavTrap::ScavTrap( ScavTrap& src )	{

	*this = src;

	std::cout \
	<< "ScavTrapper: Copy Constructor " \
	<< "\033[0;36m" \
	<< recupName() \
	<< "\033[0m" \
	<< " has been called" \
	<< std::endl;

}

/* **@ Constructor taking 'id' as parameter ********************************* */

ScavTrap::ScavTrap( std::string id ) : \
	ClapTrap( id, 100, 50, 20 )	{

	std::cout \
	<< "ScavTrapper: " \
	<< "\033[0;36m" \
	<< recupName() \
	<< "\033[0m" \
	<< " Copy Constructor has been called" \
	<< std::endl;

}

/* **@ Assignement Operator Overload **************************************** */

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs )	{

	ClapTrap::operator=( rhs );

	std::cout \
	<< "ScavTrapper: Assignement Operator Overload has been called" \
	<< std::endl;

	return ( *this );

}

/* **@ Default Destructor  ************************************************** */

ScavTrap::~ScavTrap( void )	{

	std::cout \
	<< "ScavTrapper: " \
	<< "\033[1;31m" \
	<< recupName() \
	<< "\033[0m" \
	<< " Destructor has been called" \
	<< std::endl;

}

void	ScavTrap::guardGate( void )	{

	std::cout \
	<< "ScavTrapper: " \
	<< "\033[1;33m" \
	<< recupName() \
	<< "\033[0m" \
	<<  " has entered in GateKeeper mode" \
	<< std::endl;

}

void		ScavTrap::attack( const std::string& target )	{

	if ( _EnergyPoints > 0 && _HitPoints > 0 )	{ \
\
		_EnergyPoints -= 1;
		std::cout \
		<< "ScavTrap " \
		<< "\033[1;32m" \
		<< _name \
		<< "\033[0m" \
		<< " attacks " \
		<< target \
		<< " causing " \
		<<  _AttackDamage \
		<< " points of damage!" \
		<< std::endl;
		return ;

	}
	std::cout \
	<< "ScavTrap " \
	<< "\033[1;32m" \
	<< _name \
	<< "\033[0m" \
	<< " couldn't attack" \
	<< target \
	<< " because he didn't have enough EnergyPoints " \
	<< std::endl;

}

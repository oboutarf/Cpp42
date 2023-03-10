/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:34:56 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/09 14:44:08 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
/*                           Class ClapTrap Manager                           */
/* ************************************************************************** */

/* **@ Default Constructor ************************************************** */

ClapTrap::ClapTrap( void ) : \
	_name( "" ), _HitPoints( 10 ), _AttackDamage( 0 ), _EnergyPoints( 10 )	{

	std::cout \
	<< "ClapTrapper: Default Constructor has been called" \
	<< std::endl;

}

/* **@ Copy Constructor ***************************************************** */

ClapTrap::ClapTrap( ClapTrap& src )	{

	*this = src;

	std::cout \
	<< "ClapTrapper: Copy Constructor " \
	<< "\033[0;36m" \
	<< _name \
	<< "\033[0m" \
	<< " has been called" \
	<< std::endl;

}

/* **@ Constructor with ScavTrap params  ************************************ */

ClapTrap::ClapTrap( std::string id, int HitPoints, int EnergyPoints, int AttackDamage ) : \
	_name( id ), _HitPoints( HitPoints ), _AttackDamage( AttackDamage ), _EnergyPoints( EnergyPoints )	{

	std::cout \
	<< "ClapTrapper: " \
	<< "\033[0;36m" \
	<< _name \
	<< "\033[0m" \
	<< " Constructor with default params " \
	<< std::endl;

}

/* **@ Constructor taking 'id' as parameter ********************************* */

ClapTrap::ClapTrap( std::string id ) : \
	_name( id ), _HitPoints( 10 ), _AttackDamage( 0 ), _EnergyPoints( 10 )	{

	std::cout \
	<< "ClapTrapper: " \
	<< "\033[0;36m" \
	<< _name \
	<< "\033[0m" \
	<< "default Constructor has been called" \
	<< std::endl;

}

/* **@ Assignement Operator Overload **************************************** */

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs )	{

	this->_name = rhs._name;
	this->_HitPoints = rhs._HitPoints;
	this->_AttackDamage = rhs._AttackDamage;
	this->_EnergyPoints = rhs._EnergyPoints;

	std::cout \
	<< "ClapTrapper: Assignement Operator Overload has been called" \
	<< std::endl;

	return ( *this );

}

/* **@ Default Destructor  ************************************************** */

ClapTrap::~ClapTrap( void )	{

	std::cout \
	<< "ClapTrapper: " \
	<< "\033[1;31m" \
	<< _name \
	<< "\033[0m" \
	<< " Destructor has been called" \
	<< std::endl;

}

/* ************************************************************************** */
/*                         ClapTrap Class Member Funcs                        */
/* ************************************************************************** */

void	ClapTrap::takeDamage( unsigned int amount )	{

	if ( _HitPoints > 0 )	{ \
\
		_HitPoints -= amount;

		std::cout \
		<< "ClapTrap " \
		<< "\033[1;32m" \
		<< _name \
		<< "\033[0m" \
		<< " takes " \
		<< amount \
		<< " points of damage!" \
		<< std::endl;
		if ( _HitPoints <= 0 )	{

			std::cout \
			<< "ClapTrap " \
			<< "\033[1;32m" \
			<< _name \
			<< "\033[0m" \
			<< " has been KO'd" \
			<< std::endl;

		}
		return ;

	}
	std::cout \
	<< "ClapTrap " \
	<< "\033[1;32m" \
	<< _name \
	<< "\033[0m" \
	<< " cannot take damages anymore " \
	<< "he's already been KO'd" \
	<< std::endl;

}

void	ClapTrap::beRepaired( unsigned int amount )	{

	if ( _EnergyPoints > 0 && _HitPoints > 0 )	{ \
\
		_HitPoints += amount;
		_EnergyPoints -= 1;
		std::cout \
		<< "ClapTrap " \
		<< "\033[1;32m" \
		<< _name \
		<< "\033[0m" \
		<< " retrieves " \
		<< amount \
		<< " energy points!" \
		<< std::endl;
		return ;
	
	}
	std::cout \
	<< "ClapTrap " \
	<< "\033[1;32m" \
	<< _name \
	<< "\033[0m" \
	<< " cannot be repaired because " \
	<< "he has been Ko'd or he lacks of EnergyPoints" \
	<< std::endl;

}

void	ClapTrap::attack( const std::string& target )	{

	if ( _EnergyPoints > 0 && _HitPoints > 0 )	{ \
\
		_EnergyPoints -= 1;
		std::cout \
		<< "ClapTrap " \
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
	<< "ClapTrap " \
	<< "\033[1;32m" \
	<< _name \
	<< "\033[0m" \
	<< " couldn't attack" \
	<< target \
	<< " because he has been Ko'd or he lacks of EnergyPoints" \
	<< std::endl;

}


/* ************************************************************************** */
/*                                 Seekers                                    */
/* ************************************************************************** */

std::string		ClapTrap::recupName()	{

	return ( _name );

}

int		ClapTrap::recupHitPoints()	{

	return ( _HitPoints );

}

int		ClapTrap::recupAttackDamage()	{

	return ( _AttackDamage );

}

int		ClapTrap::recupEnergyPoints()	{

	return ( _EnergyPoints );

}

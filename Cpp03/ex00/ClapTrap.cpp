/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:34:56 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 02:41:13 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                           Class ClapTrap Manager                           */
/* ************************************************************************** */

/* **@ Default Constructor ************************************************** */

ClapTrap::ClapTrap( void ) : \
	name( "" ), HitPoints( 10 ), AttackDamage( 0 ), EnergyPoints( 10 )	{

	std::cout << "ClapTrapper: Default Constructor has been called" << std::endl;

}

/* **@ Copy Constructor ***************************************************** */

ClapTrap::ClapTrap( ClapTrap& src )	{

}

/* **@ Constructor taking 'id' as parameter ********************************* */

ClapTrap::ClapTrap( std::string id ) : \
	name( id ), HitPoints( 10 ), AttackDamage( 0 ), EnergyPoints( 10 )	{

}

/* **@ Assignement Operator Overload **************************************** */

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs )	{

	(void)rhs;

}

/* **@ Default Destructor  ************************************************** */

ClapTrap::~ClapTrap( void )	{

	std::cout << "ClapTrapper: " << name << " Destructor has been called" << std::endl;

}

/* ************************************************************************** */
/*                         ClapTrap Class Member Funcs                        */
/* ************************************************************************** */

void	ClapTrap::takeDamage( unsigned int amount )	{

	( void )amount;

}

void	ClapTrap::beRepaired( unsigned int amount )	{

	( void )amount;

}

void	ClapTrap::attack( const std::string& target )	{

	( void )target;

}
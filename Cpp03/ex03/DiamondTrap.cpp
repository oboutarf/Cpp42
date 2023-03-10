/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 07:58:35 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/09 15:23:10 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <stdio.h>

// int	states[3] = { FragTrap::recupHitPoints(), ScavTrap::recupEnergyPoints(), FragTrap::recupAttackDamage()}


DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( ( name + "_clap_name" ), 100, 50, 30 )	{

	_name = name;

	std::cout \
	<< "DiamondTrapper: " \
	<< "\033[0;36m" \
	<< _name \
	<< "\033[0m" \
	<< " Constructor has been called" \
	<< std::endl;

}

DiamondTrap::DiamondTrap( const DiamondTrap& ref ) : \
	ClapTrap( (ref.DiamondName() + "_clap_name" ), 100, 50, 30 )	{

	this->_name = ref.DiamondName();

}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& rhs )	{

	_name = rhs.DiamondName();

	return ( *this );

}

DiamondTrap::~DiamondTrap( void )	{

	std::cout \
	<< "DiamondTrap " \
	<< "\033[1;31m" \
	<< _name \
	<< "\033[0m" \
	<< " Destructor has been called" \
	<< std::endl;

}

void	DiamondTrap::whoAmI( void )	{

	std::cout \
	<< "whoAmI()? " \
	<< " Hello! I'm " \
	<< "\033[1;33m" \
	<< _name \
	<< "\033[0m" \
	<< " and my Clap name is: "
	<< "\033[1;33m" \
	<< ClapTrap::_name \
	<< "\033[0m" \
	<< "!" \
	<< std::endl;
}

std::string	DiamondTrap::DiamondName( void ) const {

	return ( _name );

}

void	DiamondTrap::attack( std::string name )	{

	ScavTrap::attack( ( const std::string& )name );

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 07:58:35 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 08:39:41 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : \
	ScavTrap( name ), FragTrap( name )	{

	std::cout \
	<< "DiamondTrapper: " \
	<< _name \
	<< " Constructor has been called" \
	<< std::endl;

}

DiamondTrap::DiamondTrap( const DiamondTrap& ref ) {

	( void )ref;

}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& rhs )	{

	_name = rhs.DiamondName();

	return ( *this );

}


DiamondTrap::~DiamondTrap( void )	{

	std::cout \
	<< "DiamondTrap " \
	<< _name \
	<< " Destructor has been called" \
	<< std::endl;

}


std::string	DiamondTrap::DiamondName( void ) const {

	return ( _name );

}
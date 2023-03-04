/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:35:48 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 23:15:52 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name( name )	{

	std::cout << "HumanB: " << name << " Constructor has been called" << std::endl;

}

void	HumanB::setWeapon( Weapon& newWeapon )	{

	usedWeapon = &newWeapon;

}

void	HumanB::attack( void )	{

	std::cout << name << " attacks with their " << usedWeapon->getType() << std::endl;

}

HumanB::~HumanB( void ) {

	std::cout << "HumanB: " << " Destructor has been called" << std::endl;

}

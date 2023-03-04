/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:35:45 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 23:09:59 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& usedWeapon ) : name( name ), usedWeapon(usedWeapon)	{

	std::cout << "HumanA: " << name << " Constructor has been called" << std::endl;

}

void	HumanA::attack( void )	{

	std::cout << name << " attacks with their " << usedWeapon.getType() << std::endl;

}

HumanA::~HumanA( void ) {

	std::cout << "HumanA: " << " Destructor has been called" << std::endl;

}

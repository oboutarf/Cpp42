/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:34:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 23:05:05 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )	{

	DiamondTrap	scott("scott");
	DiamondTrap	jon("jon");

	jon.attack( "scott" );
	scott.highFivesGuys();

	jon.beRepaired(100);
	scott.highFivesGuys();
	jon.attack( "scott");

	jon.whoAmI();
	jon.guardGate();
	jon.attack( "scott" );
	scott.whoAmI();


	return ( EXIT_SUCCESS );

}
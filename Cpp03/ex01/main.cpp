/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:34:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 07:12:12 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )	{

	ScavTrap	jon("jon");
	ClapTrap	robert("robert");

	jon.attack("marius");
	robert.attack("jon");
	jon.takeDamage(5);
	jon.guardGate();
	robert.attack("jon");
	jon.takeDamage(1);

	return ( EXIT_SUCCESS );

}
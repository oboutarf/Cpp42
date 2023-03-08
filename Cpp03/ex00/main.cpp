/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:34:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 22:45:19 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )	{

	ClapTrap	jon("jon");
	ClapTrap	robert("robert");
	ClapTrap	marius("marius");
	
	jon.attack("marius");
	marius.takeDamage(5);
	robert.attack("jon");
	jon.beRepaired(100);
	jon.beRepaired(1000);
	jon.takeDamage(50);
	marius.attack("jon");
	jon.takeDamage(100);
	jon.takeDamage(100);
	return ( EXIT_SUCCESS );

}
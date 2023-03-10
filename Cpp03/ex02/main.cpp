/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:34:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/09 15:43:33 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )	{

	FragTrap	jon( "jon" );
	ClapTrap	robert( "robert" );
	FragTrap	Florian( "Florian" );
	ScavTrap	joseph("joseph");

	jon.attack( "marius" );
	Florian.beRepaired( 10 );
	Florian.attack( "marius" );
	robert.attack( "jon" );
	jon.takeDamage( 5 );
	robert.attack( "jon" );
	jon.takeDamage( 1 );
	Florian.highFivesGuys();

	return ( EXIT_SUCCESS );

}
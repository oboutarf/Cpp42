/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:26:54 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 16:05:02 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	ZombieOne( "Pirate" );

	ZombieOne.announce();
	Zombie	*ZombieTwo = newZombie( "Marin" );
	ZombieTwo->announce();
	delete ZombieTwo;
	randomChump( "Warrior" );
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:26:54 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 20:25:53 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	ZombieOne( "Pirate" ); //  // ZombieOne is created on the stack
	ZombieOne.announce();
	Zombie	*ZombieTwo = newZombie( "Marin" ); // ZombieTwo is created with the return of heap allocated pointer from 'newZombie' func
	ZombieTwo->announce();
	delete ZombieTwo; // ZombieOne is deleted implicitely because allocated on the heap
	randomChump( "Warrior" ); // ZombieThree is created on the stack and deleted in function after he called 'announce' func
	return (0); // ZombieOne Destructor is called because the func(main) in which he was created returns
}

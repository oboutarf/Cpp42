/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:34:04 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 18:22:13 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*newHorde = new Zombie[N];
	if (!newHorde)
		return ( NULL );
	for ( int i = 0; i < N; i++ )
		newHorde[i].initName( name );
	return (newHorde);
}

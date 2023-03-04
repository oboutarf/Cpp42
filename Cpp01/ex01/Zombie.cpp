/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:33:46 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 18:16:20 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie( void )
{
	std::cout << "Zombie Destructor has been called" << std::endl;
}

Zombie::Zombie( void )
{
	std::cout << "Zombie Constructor has been called" << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::initName( std::string name )
{
	this->name = name;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:36:01 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 20:37:01 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon( std::string instType ) : type( instType )	{

	std::cout << "Weapon: " << type << " Constructor has been called" << std::endl;

}

const std::string&	Weapon::getType( void )		{

	return ( type );

}

void	Weapon::setType( std::string newType )		{

	type = newType;

}

Weapon::~Weapon( void )		{

	std::cout << "Weapon: " << "Destructor has been called" << std::endl;

}
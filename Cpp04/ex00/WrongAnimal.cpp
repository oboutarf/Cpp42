/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:59:14 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 17:45:31 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()	{

	this->_type = "WrongAnimal";
	std::cout << this->_type << " default Constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& ref )	{

	this->_type = ref._type;
}

void	WrongAnimal::operator=( const WrongAnimal& rhs )	{

	this->_type = rhs._type;
}

std::string	WrongAnimal::getType( void ) const {

	return ( this->_type );
}

void	WrongAnimal::makeSound( void )	const {

	std::cout << "[ WrongAnimal noise ( ... ) ]" << std::endl;
}

WrongAnimal::~WrongAnimal()	{

	std::cout << this->_type << " WrongAnimal Destructor has been called" << std::endl;
}
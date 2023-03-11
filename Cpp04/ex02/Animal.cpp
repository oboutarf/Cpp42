/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 18:34:11 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal( void ) {

	this->_type = "AAnimal";

	std::cout << this->_type << " default Constructor called " << std::endl;
}

AAnimal::AAnimal( std::string name )	{

	this->_type = name;

	std::cout << "AAnimal Constructor called with a name: " << name  << std::endl;
}

AAnimal::AAnimal( const AAnimal& ref )	{

	this->_type = ref._type;

	std::cout << "AAnimal copy Constructor  has been called" << std::endl;
}

std::string	AAnimal::getType( void )	const {

	return ( this->_type );
}

void	AAnimal::operator=( const AAnimal& rhs )	{

	this->_type = rhs._type;
}

void	AAnimal::makeSound()	const {

	std::cout << "[ AAnimal noise ( ... ) ]" << std::endl;
}

AAnimal::~AAnimal( void )	{

	std::cout << " AAnimal Destructor called " << std::endl;
}
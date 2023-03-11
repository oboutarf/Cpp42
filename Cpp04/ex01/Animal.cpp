/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/10 15:50:57 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	this->_type = "Animal";
	std::cout << this->_type << " default Constructor called " << std::endl;

}

Animal::Animal( std::string name )	{

	this->_type = name;
	std::cout << "Animal Constructor called with a name: " << name  << std::endl;

}

Animal::Animal( const Animal& ref )	{

	*this = ref;

}

std::string	Animal::getType( void )	const {

	return ( this->_type );

}

void	Animal::operator=( const Animal& rhs )	{

	this->_type = rhs._type;

}

void	Animal::makeSound()	const {

	std::cout << "[ Animal noise ( ... ) ]" << std::endl;

}

Animal::~Animal( void )	{

	std::cout << " Animal Destructor called " << std::endl;

}
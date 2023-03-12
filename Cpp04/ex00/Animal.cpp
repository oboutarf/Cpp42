/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:35:14 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	this->_type = "Animal";
	std::cout << this->_type << " default Constructor called " << std::endl;
}

Animal::Animal( std::string name )	{

	this->_type = name;
	std::cout << this->_type << " Constructor called with a name: " << name  << std::endl;
}

Animal::Animal( const Animal& ref )	{

	*this = ref.getType() ;
}

std::string	Animal::getType( void )	const {

	return this->_type ;
}

Animal &	Animal::operator=( const Animal& rhs )	{

	this->_type = rhs.getType();
	std::cout << "Animal assignement operator called" << std::endl;
	return *this ;
}

void	Animal::makeSound()	const {

	std::cout << "[* Animal default noise *]" << std::endl;
}

Animal::~Animal( void )	{

	std::cout << "Animal Destructor called" << std::endl;
}
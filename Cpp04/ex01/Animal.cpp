/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:48:53 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	this->_type = "Animal";
	std::cout << this->_type << " default Constructor called " << std::endl;
}

Animal::Animal( std::string name )	{

	this->_type = name ;
	std::cout << "Animal Constructor called with a name: " << name  << std::endl;
}

Animal::Animal( const Animal& ref )	{

	this->_type = ref.getType();
	std::cout << "Animal copy Constructor  has been called" << std::endl;
}

std::string	Animal::getType( void )	const {
	return this->_type ;
}

Animal &	Animal::operator=( const Animal& rhs )	{

	this->_type = rhs.getType();
	return *this;
}

void	Animal::makeSound()	const {
	std::cout << "[ [+] Animal random noise [+] ]" << std::endl;
}

Animal::~Animal( void )	{
	std::cout << " Animal Destructor called " << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/10 01:18:25 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	std::cout << " Animal default Constructor called " << std::endl;

}

Animal::Animal( std::string name )	{

	this->_type = name;
	std::cout << " Animal Constructor called with a name: " << name  << std::endl;

}

Animal::Animal( const Animal& ref )	{

	*this = ref;

}

void	Animal::operator=( const Animal& rhs )	{

	this->_type = rhs._type;

}

void	Animal::makeSound()	const {

	std::cout << "[ POLYMORPHER NOISE ]" << std::endl;

}

Animal::~Animal( void )	{

	std::cout << " Animal Destructor called " << std::endl;

}
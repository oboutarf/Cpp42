/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:18 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 17:46:18 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )	{

	this->_type = "Dog";

	std::cout << this->_type << " default Constructor called" << std::endl;
}

Dog::Dog( const Dog& ref )	{

	this->_type = ref._type;

	std::cout << this->_type << " copy Constructor called" << std::endl;
}

void	Dog::operator=( const Dog& rhs )	{

	this->_type = rhs._type;

	std::cout << "Dog assignement operator called" << std::endl;
}

void	Dog::makeSound() const	{

	std::cout << "[ Woooofffff! Wooooffff! Woooffff! ]" << std::endl;
}

Dog::~Dog( void )	{

	std::cout << "Dog Destructor called" << std::endl;
}

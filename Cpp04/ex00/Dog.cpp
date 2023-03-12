/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:18 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:36:42 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )	{

	this->_type = "Dog";
	std::cout << this->getType() << " default Constructor called" << std::endl;
}

Dog::Dog( const Dog& ref )	{

	this->_type = ref.getType();
	std::cout << this->getType() << " copy Constructor called" << std::endl;
}

Dog &	Dog::operator=( const Dog & rhs ) {

	this->_type = rhs.getType();
	std::cout << "Cat assignement operator called" << std::endl;
	return *this ;
}

void	Dog::makeSound() const	{

	std::cout << "[ Woooofffff! Wooooffff! Woooffff! ]" << std::endl;
}

Dog::~Dog( void )	{

	std::cout << "Dog Destructor called" << std::endl;
}

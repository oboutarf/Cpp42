/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:13 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 01:40:46 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) 	{

	this->_brain = new Brain;
	std::cout << this->_type << " default Constructor called" << std::endl;

}

Cat::Cat( const Cat& ref )	{

	this->_type = ref._type;
	this->_brain = ref._brain;
	std::cout << "Cat copy Constructor called" << std::endl;

}

std::string	Cat::haveIdea() const {

	return ( this->_brain->haveIdea() );

}

void	Cat::operator=( const Cat& rhs )	{

	this->_type = rhs._type;
	std::cout << "Cat assignement operator called" << std::endl;

}

void	Cat::makeSound() const	{

	std::cout << "[ Miiiiaaaaaaouuuuwwwww ]" << std::endl;

}

Cat::~Cat( void )	{

	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;

}
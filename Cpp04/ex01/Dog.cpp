/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:18 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/13 13:29:03 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) 	{

	this->_brain = new Brain();
	std::cout << this->_type << " default Constructor called" << std::endl;
}

Dog::Dog( const Dog& ref )	{

	this->_type = ref._type;
	this->_brain = new Brain( *ref._brain );
	std::cout << "Dog copy Constructor called" << std::endl;
}

std::string	Dog::haveIdea( int const & i ) const {
	return this->_brain->haveIdea( i );
}

void	Dog::setNewIdea( int const & i, std::string const & NewIdea )	{
	this->_brain->setNewIdea( i, NewIdea );
}

Dog &	Dog::operator=( const Dog & rhs )	{

	this->~Dog();
	this->_brain = new Brain( *rhs._brain ) ;
	this->_type = rhs.getType() ;
	std::cout << "Dog assignement operator called" << std::endl;
	return  *this ;
}

void	Dog::makeSound() const	{
	std::cout << "[ Miiiiaaaaaaouuuuwwwww ]" << std::endl;
}

Dog::~Dog( void )	{

	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

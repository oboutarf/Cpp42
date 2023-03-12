/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:59:14 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:38:26 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()	{

	this->getType() = "WrongAnimal";
	std::cout << this->getType() << " default Constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& ref )	{

	this->_type = ref.getType();
}

WrongAnimal &	WrongAnimal::operator=( const WrongAnimal& rhs )	{

	this->_type = rhs.getType();
	std::cout << "WrongAnimal assignement operator called" << std::endl;
	return *this ;
}

std::string	WrongAnimal::getType( void ) const {

	return this->_type ;
}

void	WrongAnimal::makeSound( void )	const {

	std::cout << "[ WrongAnimal noise ( ... ) ]" << std::endl;
}

WrongAnimal::~WrongAnimal()	{

	std::cout << this->getType() << " WrongAnimal Destructor has been called" << std::endl;
}
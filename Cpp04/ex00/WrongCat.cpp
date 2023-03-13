/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:59:19 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/13 13:35:35 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )	{

	this->_type = "WrongCat";

	std::cout << this->getType() << " default Constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& ref )	{

	this->getType() = ref.getType();

	std::cout << this->getType() << " copy Constructor called" << std::endl;
}

WrongCat &	WrongCat::operator=( const WrongCat& rhs )	{

	this->getType() = rhs.getType();
	std::cout << "WrongCat assignement operator called" << std::endl;
	return *this ;
}

void	WrongCat::makeSound() const	{

	std::cout << "[ WrongCat wrong noise ... ]" << std::endl;
}

WrongCat::~WrongCat( void )	{

	std::cout << "WrongCat Destructor called" << std::endl;
}
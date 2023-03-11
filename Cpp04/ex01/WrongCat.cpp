/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:59:19 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/10 13:22:38 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )	{

	this->_type = "WrongCat";
	std::cout << this->_type << " default Constructor called" << std::endl;

}

WrongCat::WrongCat( const WrongCat& ref )	{

	this->_type = ref._type;
	std::cout << this->_type << " copy Constructor called" << std::endl;

}

void	WrongCat::operator=( const WrongCat& rhs )	{

	this->_type = rhs._type;
	std::cout << "WrongCat assignement operator called" << std::endl;

}

void	WrongCat::makeSound() const	{

	std::cout << "[ Meeeeeeeeeeeeeoooooooooooooowwwwwww !!! ]" << std::endl;

}

WrongCat::~WrongCat( void )	{

	std::cout << "WrongCat Destructor called" << std::endl;

}
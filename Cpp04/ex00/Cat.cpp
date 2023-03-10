/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:13 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/10 01:17:51 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )	{

	this->_type = "Cat";
	std::cout << this->_type << " default Constructor called" << std::endl;

}

Cat::Cat( const Cat& ref )	{

	( void )ref;
	std::cout << "Cat copy Constructor called" << std::endl;

}

void	Cat::operator=( const Cat& rhs )	{

	( void )rhs;

	std::cout << "Cat assignement operator called" << std::endl;

}

void	Cat::makeSound() const	{

	std::cout << "[ Miiiiaaaaaaouuuuwwwww ]" << std::endl;

}

Cat::~Cat( void )	{

	std::cout << "Cat Destructor called" << std::endl;

}
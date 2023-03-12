/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:08:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 10:37:44 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" )	{

	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice( const Ice & ref ) : AMateria( "ice" )	{

	*this = ref;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &	Ice::operator=( const Ice & rhs )	{

	this->_type = rhs._type;
	std::cout << "Ice assignement operator called" << std::endl;
	return *this ;
}

AMateria*	Ice::clone( void ) const	{

	Ice*	clonedMateria = new Ice( *this );

	std::cout << "Ice materia was cloned" << std::endl;
	return clonedMateria ;
}

void	Ice::use( ICharacter & target )	{

	std::cout << "* shoots an ice bolt at " \
		<< target.getName() << " *" << std::endl;
}

Ice::~Ice( void )	{

	std::cout << "Ice destructor called" << std::endl;
}


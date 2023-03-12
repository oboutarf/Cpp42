/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:07:51 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 10:36:54 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" )	{

	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( const Cure & ref ) : AMateria( "cure" )	{

	*this = ref;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &	Cure::operator=( const Cure & rhs )	{

	this->_type = rhs._type;
	std::cout << "Cure assignement operator called" << std::endl;
	return *this ;
}

AMateria*	Cure::clone( void ) const	{

	Cure*	clonedMateria = new Cure( *this );

	std::cout << "Ice materia was cloned" << std::endl;
	return clonedMateria ;
}

void	Cure::use( ICharacter & target )	{

	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

Cure::~Cure( void )	{

	std::cout << "Cure destructor called" << std::endl;
}

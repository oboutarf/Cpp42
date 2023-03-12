/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:43:49 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 11:35:36 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type(" null ")	{

	std::cout << " Amateria default constructor called" << std::endl;
}

AMateria::AMateria( const AMateria & ref ) : _type( ref._type)	{

	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &	AMateria::operator=( const AMateria & rhs )	{

	( void )rhs;
	std::cout << "AMateria assignement operator called" << std::endl;
	return *this ;
}

AMateria::AMateria( std::string const & type ) : _type( type )	{

	std::cout << " Amateria default constructor called with type: [ " \
		<< _type << " ]" << std::endl;
}

AMateria::~AMateria( void )	{

	std::cout << " Amateria default destructor called" << std::endl;
}

/* ============================================================================*/

AMateria*	AMateria::clone() const	{

	return ( NULL );
}

void	AMateria::use( ICharacter& target )	{

	( void )target;
}

std::string const &	AMateria::getType() const	{

	return this->_type ;
}

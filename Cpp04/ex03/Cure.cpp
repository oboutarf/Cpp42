/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:07:51 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 19:59:56 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void )	{

	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( const Cure & ref )	{

	( void )ref;
}

Cure &	Cure::operator=( const Cure & rhs )	{

	std::cout << "Cure assignement operator called" << std::endl;
}

AMateria*	Cure::clone( void ) const	{

}

void	Cure::use( ICharacter & target )	{

	( void )target;
}

Cure::~Cure( void )	{

	std::cout << "Cure destructor called" << std::endl;
}

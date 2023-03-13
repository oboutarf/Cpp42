/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 02:04:15 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/13 13:41:36 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )	{

	this->_inventory = 0;
	for ( int i = 0; i < 4; i++ )
		this->_materiaSource[i] = NULL ;

	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & ref )	{

	*this = ref ;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource & 	MateriaSource::operator=( MateriaSource const & rhs )	{

	this->~MateriaSource();
	for ( int i = 0; i < 4; i++ )
		this->_materiaSource[i] = rhs._materiaSource[i] ;
	this->_inventory = rhs._inventory ;
	std::cout << "MateriaSource constructor called" << std::endl;
	return *this ;
}

MateriaSource::~MateriaSource( void )	{

	for ( int i = 0; i < 4; i++ )
		if ( this->_materiaSource[i])
			delete this->_materiaSource[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria( AMateria* toEquip )	{

	if ( this->_inventory < 4 )	{
		this->_materiaSource[ _inventory ] = toEquip;
		_inventory++;
		return ;
	}
	delete toEquip ;
	std::cout << "MateriaSource: you can't have more than 4 materias," << " unequip a materia and try again" << std::endl;

}

AMateria* 	MateriaSource::createMateria( std::string const & type )	{

	for ( int i = 0; i < 4; i++ )	{
		if ( this->_materiaSource[i]->getType() == type )
			return this->_materiaSource[i]->clone();
		if ( !this->_materiaSource[i + 1] )
			break ;
	}

	return ( NULL );
}

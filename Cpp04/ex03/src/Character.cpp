/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 01:44:35 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 22:39:14 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )	{

	this->_toUse = 0;
	this->_countHistory = 0;
	this->_name = "unspecified";
	for ( int i = 0; i < 4; i++ )
		this->_bagPack[i] = NULL;
	for ( int i = 0; i < MATERIA_TOTAL; i++ )
		this->_usedHistory[i] = NULL;

	std::cout << "Character default constructor called" << std::endl;
}

Character::Character( std::string const & name )	{

	this->_toUse = 0;
	this->_name = name;
	this->_countHistory = 0;
	for ( int i = 0; i < 4; i++ )
		this->_bagPack[i] = NULL;
	for ( int i = 0; i < MATERIA_TOTAL; i++ )
		this->_usedHistory[i] = NULL;

	std::cout << "Character constructor called with the name: " << this->_name << std::endl;
}

Character::Character( Character const & ref )	{

	for ( int i = 0; i < ref._toUse; i++ )
		this->_bagPack[i] = ref._bagPack[i]->clone();
	for ( int i = 0; i < 4; i++ )
		this->_bagPack[i] = NULL;
	for ( int i = 0; i < MATERIA_TOTAL; i++ )
		this->_usedHistory[i] = NULL;
	this->_countHistory = 0;
	this->_toUse = ref._toUse;
	this->_name = ref._name ;

	std::cout << "Character copy constructor called" << std::endl;
}

Character & Character::operator=( Character const & rhs )	{

	this->~Character();
	for ( int i = 0; i < rhs._toUse; i++ )
		this->_bagPack[i] = rhs._bagPack[i] ;
	for ( int i = 0; i < MATERIA_TOTAL; i++ )
		this->_usedHistory[i] = rhs._usedHistory[i] ;
	this->_name = rhs._name ;
	this->_toUse = rhs._toUse;
	this->_countHistory = rhs._countHistory;

	std::cout << "Character assignement operator called" << std::endl;
	return *this ;
}

Character::~Character( void )	{

	for ( int i = 0; i < 4; i++ )	{
		if ( this->_bagPack[i])
			delete this->_bagPack[i];
	}
	for ( int i = 0; i < this->_countHistory; i++ )	{
		if ( this->_usedHistory[i] )
			delete this->_usedHistory[i];
	}

	std::cout << "Character destructor called" << std::endl;
}

std::string const &	Character::getName( void ) const	{
	return this->_name ;
}

void	Character::equip( AMateria* m )	{

	if ( !m )	{
		std::cout << "MateriaSource: can't equip Materia, type unknown" << std::endl;
		return ;
	}
	if ( this->_toUse < 4 )	{

		for ( int i = 0; i < 4 ; i++ )	{
			if ( !this->_bagPack[i] )	{
				this->_bagPack[i] = m->clone();
				std::cout << this->_name <<  " successfully equiped " << this->_bagPack[i]->getType() << std::endl;
				this->_toUse++;
				return ;
			}
		}
	}
	std::cout << this->_name <<  " bagpack is full, you have to" << " unequip at least one Materia" << std::endl;
}

void	Character::addUsedHistory( AMateria & unEquiped )	{

	this->_usedHistory[ this->_countHistory ] = &(unEquiped);
	this->_countHistory++;
}

void	Character::unequip( int idx )	{

	if ( idx < 0  || idx > 4)	{

		std::cout << "Can't unequip at index " << idx << ", try an index between 0 and 3" << std::endl;
		return ;
	}
	else if ( !this->_bagPack[idx] )	{

		std::cout << "Can't unequip at index " << idx << ", because you have nothing in your bagpack" << " at this place" << std::endl;
		return ;
	}
	else if ( this->_countHistory == MATERIA_TOTAL )	{

		std::cout << "Can't unequip " << this->_bagPack[idx]->getType() << " because your history is full" << std::endl;
		return ;
	}
	else	{

		std::cout << std::string( this->_name ) <<  this->_bagPack[idx]->getType() << " was successfully unequiped at index " << idx << std::endl;
		this->addUsedHistory( (*this->_bagPack[idx]) );
		this->_bagPack[idx] = NULL;
		this->_toUse--;
	}
}

void	Character::use(int idx, ICharacter& target)	{


	if ( idx >= 0 && idx < 4 && this->_bagPack[idx] )
		this->_bagPack[idx]->use( target );
	else
		std::cout << "You have chosen the bad index, cannot use materia" << std::endl;
}
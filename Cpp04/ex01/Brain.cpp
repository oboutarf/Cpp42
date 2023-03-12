/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:10:37 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:48:40 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )	{

	this->EducateBrain();
	std::cout << "Brain default Constructor has been called" << std::endl;
}

Brain::Brain( const Brain& ref )	{

	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = std::string(ref._ideas[i]);
	std::cout << " Brain copy Constructor has been called" << std::endl;
}

std::string	Brain::haveIdea( int const & i ) const	{
	return this->_ideas[i] ;
}

void	Brain::setNewIdea( int const & i, std::string const & newIdea )	{

	if ( i < 100 )
		this->_ideas[i] = newIdea;
	else
		std::cout << " Index given is too high for this brain... " << std::endl;
}

Brain&	Brain::operator=( const Brain& rhs )	{

	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = std::string(rhs._ideas[i]);
	std::cout << "Brain Assignement operator has been called" << std::endl;
	return *this;
}

Brain::~Brain( void )	{
	std::cout << "Brain Destructor has been called" << std::endl;
}

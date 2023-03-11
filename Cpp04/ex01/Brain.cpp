/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:10:37 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 03:39:17 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )	{

	this->EducateBrain();

	std::cout << "Brain default Constructor has been called" << std::endl;
}

Brain::Brain( const Brain& ref )	{

	this->_ideas = new std::string[100];
	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = ref._ideas[i];

	std::cout << " Brain copy Constructor has been called" << std::endl;
}

std::string	Brain::haveIdea()	const {

	return ( this->_ideas[5] );

}

void	Brain::setNewIdea( int const & i, std::string const & NewIdea )	{

	if ( i < 100 )
		this->_ideas[i] = NewIdea;
	else
		std::cout << " Index given is too high for this brain... " << std::endl;

}

Brain&	Brain::operator=( const Brain& rhs )	{

	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = rhs._ideas[i];

	std::cout << "Brain Assignement operator has been called" << std::endl;

	return *this;
}

Brain::~Brain( void )	{

	std::cout << "Brain Destructor has been called" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:10:37 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 01:19:44 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <stdio.h>

Brain::Brain( void )	{

	this->EducateBrain();
	std::cout << "Brain default Constructor has been called" << std::endl;

}

Brain::Brain( const Brain& ref )	{

	( void )ref;

}

std::string	Brain::haveIdea()	const {

	return (this->_ideas[5]);

}

void	Brain::operator=( const std::string& rhs )	{

	( void )rhs;

}

Brain::~Brain( void )	{

	std::cout << "Brain Destructor has been called" << std::endl;

}

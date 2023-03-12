/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:16:01 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 18:10:24 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()	{

	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & ref )	{

	( void )ref;
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()	{

	std::cout << "Bureaucrat destructor called" << std::endl;
}


Bureaucrat &	Bureaucrat::operator=( const Bureaucrat & rhs )	{
	( void )rhs;
}

std::string const &	Bureaucrat::getName( void )	{

	return this->_name ;
}

unsigned int	Bureaucrat::getGrade( void )	{

	return this->_grade ;
}

void	Bureaucrat::upGrade( void )	{

	this->_grade--;
	if ( !this->_grade )	{
	
		this->_grade++;
		std::cout << "Can't upgrade " << this->getName() \
			<< ", he has already the max grade" <<  std::endl; 
		return ;
	}
	std::cout << this->getName() << " has been upgraded" << std::endl;

}

void	Bureaucrat::downGrade( void )	{

	this->_grade++;
	if ( this->_grade == 150 )	{

		this->_grade--;
		std::cout << "Can't downgraded " << this->getName() \
			<< ", he has already the min grade" <<  std::endl; 
		return ;
	}
	std::cout << this->getName() << " has been downgraded" << std::endl;

}
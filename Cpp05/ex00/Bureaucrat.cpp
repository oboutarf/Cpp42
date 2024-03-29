/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:16:01 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/19 14:42:14 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

char const	*Bureaucrat::GradeTooHighException::what(void) const throw()	{
	return ("INVALID::Bureaucrat: grade is too high, try again!");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()	{
	return ("INVALID::Bureaucrat: grade is too low, try again!");
}

Bureaucrat::Bureaucrat()	{
	std::cout << "Bureaucrat: default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string const & name, int grade ) : _name( name )	{

	if ( grade <= 0 )
		throw Bureaucrat::GradeTooHighException();
	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade ;
	std::cout << "Bureaucrat: constructor called [ name: " << this->getName() << "] [ grade: " << this->getGrade() << " ]" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & ref )	{
	( void )ref;
	std::cout << "Bureaucrat: copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()	{
	std::cout << "Bureaucrat: destructor called" << std::endl;
}

Bureaucrat &	Bureaucrat::operator=( const Bureaucrat & rhs )	{
	this->_grade = rhs.getGrade() ;
	return *this ;
}

std::string const &	Bureaucrat::getName( void )	const {
	return this->_name ;
}

unsigned int	Bureaucrat::getGrade( void )	const {
	return this->_grade ;
}

void	Bureaucrat::upGrade( void )	{

	if ( !(this->getGrade() - 1) )	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	this->_grade--;
	std::cout << "UPGRADE::Bureaucrat: " <<  this->getName() << " has been successfully been upgraded to rank [ " << this->getGrade() << " ]" << std::endl;
}

void	Bureaucrat::downGrade( void )	{

	if (this->getGrade() == GRADE_LIMIT ) 	{
		throw Bureaucrat::GradeTooHighException();
		return ;
	}
	this->_grade++;
	std::cout << "DOWNGRADE::Bureaucrat: " <<  this->getName() << " has been successfully been downgraded to rank [ " << this->getGrade() << " ]" << std::endl;
}

std::ostream	&operator<<(std::ostream & out, const Bureaucrat & B )	{
	out << B.getName() << ", bureaucrat grade " << B.getGrade() << "." << std::endl;
	return out ;
}
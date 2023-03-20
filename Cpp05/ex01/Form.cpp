/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:29:33 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/19 14:54:24 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

char const	*Form::GradeTooHighException::what(void) const throw()	{
	return ("INVALID::Form: grade is too high, try again!");
}

char const	*Form::GradeTooLowException::what(void) const throw()	{
	return ("INVALID::Form: grade is too low, try again!");
}

char const	*Form::BureaucratSignedAlready::what(void) const throw()	{
	return ("INVALID::Form: bureaucrat already signed the form!");
}

Form::Form( void ) : _name("garbage")	{
	this->_isSigned = false ;
	this->_gradeToSign = 150 ;
	this->_gradeToExecute = 150 ;
	std::cout << "Form: default constructor called" << std::endl;
}

Form::Form( Form const & ref ) : _name(ref.getName())	{
	this->_isSigned = ref._isSigned ;
	this->_gradeToExecute = ref.getGradeToExecute();
	this->_gradeToSign = ref.getGradeToSign();
	std::cout << "Form: copy constructor called" << std::endl;
}

void	Form::beSigned( Bureaucrat & target )	{
	if ( this->checkStatus() )	{
		throw Form::BureaucratSignedAlready() ;
		return ;
	}
	if ( this->_gradeToSign < target.getGrade() )	{
		throw Form::GradeTooLowException() ;
		return ;
	}
	this->_isSigned = true ;
	std::cout << "Bureaucrat: " << target.getName() << " has successfully signed  [form " << this->getName() << "]" << std::endl;
}

Form::Form( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute ) : _name(name)	{

	if (gradeToSign <= 0 || gradeToExecute <= 0 )
		throw Form::GradeTooHighException() ;
	if (gradeToSign > 150 || gradeToExecute > 150 )
		throw Form::GradeTooLowException() ;
	this->_isSigned = false ;
	this->_gradeToSign = gradeToSign;
	this->_gradeToExecute = gradeToExecute;
	std::cout << "Form: constructor called, name: [" << this->getName() << "]; grade to execute: [" << this->getGradeToExecute() << "]; grade to sign: [" << this->getGradeToSign() << "]." << std::endl;
}

Form &	Form::operator=( Form const & rhs )	{
	this->_isSigned = rhs.checkStatus() ;
	this->_gradeToSign = rhs.getGradeToSign() ;
	this->_gradeToExecute = rhs.getGradeToExecute() ;
	return *this ;
}

Form::~Form()	{
	std::cout << "Form: destructor called" << std::endl;
}

std::string const	Form::getName( void ) const	{
	return this->_name ;
}

unsigned int	Form::getGradeToExecute( void ) const	{
	return this->_gradeToExecute ;
}

unsigned int	Form::getGradeToSign( void ) const	{
	return this->_gradeToSign ;
}

bool	Form::checkStatus( void ) const	{
	if ( !this->_isSigned )
		return false ; 
	return true ;
}

std::ostream	&operator<<(std::ostream & out, const Form & F )	{
	out << F.getName() << ", grade to execute: [ " << F.getGradeToExecute() << " ]; grade to sign: [ " << F.getGradeToSign() << " ]; status: " << F.checkStatus() << std::endl;
	return out ;
}

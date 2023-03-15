/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:49:34 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/15 19:42:14 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form()	{
	std::cout << "PresidentialPardonForm: constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string & target ) : Form("PresidentialPardonForm", target, 15, 17)	{
	std::cout << "PresidentialPardonForm: constructor called with type: [" << this->getName() << "]" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )	{
	std::cout << "PresidentialPardonForm: destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & ref )	{
	( void )ref;
	std::cout << "PresidentialPardonForm: copy constructor called" << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )	{
	( void )rhs ;
	return *this ;
}

std::string const PresidentialPardonForm::getTarget()	const	{
	return this->_target;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor )	{
	if ( !this->checkStatus() && executor.getGrade() > this->getGradeToSign() )	{
		std::cout << "PresidentialPardonForm: couldn't execute form because form isn't signed and " << executor.getName() << " grade is too low to sign it." << std::endl;
		return ;
	}
	if ( !this->checkStatus() && executor.getGrade() <= this->getGradeToSign() )
		executor.signForm( *this );
	if ( executor.getGrade() <= this->getGradeToExecute() )	{
		std::cout << executor.getName() << " has been exonerated by Zaphod Beeblebrox." << std::endl;
		executor.executeForm( *this );
		return ;
	}
}

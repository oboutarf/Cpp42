/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:49:37 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/15 19:31:43 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )	{
	std::cout << "RobotomyRequestForm: constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string & target ) : Form("RobotomyRequestForm", target, 2, 3)	{
	std::cout << "RobotomyRequestForm: constructor called with type: [" << this->getName() << "]" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )	{
	std::cout << "RobotomyRequestForm: destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & ref )	{
	( void )ref;
	std::cout << "RobotomyRequestForm: copy constructor called" << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )	{
	( void )rhs ;
	return *this ;
}

std::string const	RobotomyRequestForm::getTarget( void )	const	{
	return this->_target;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor )	{
	if ( !this->checkStatus() && executor.getGrade() > this->getGradeToSign() )	{
		std::cout << "RobotomyRequestForm: couldn't execute form because form isn't signed and " << executor.getName() << " grade is too low to sign it." << std::endl;
		return ;
	}
	if ( !this->checkStatus() && executor.getGrade() <= this->getGradeToSign() )
		executor.signForm( *this );
	if ( executor.getGrade() <= this->getGradeToExecute() )	{
		std::cout << " Brrrr, Broom, Pzzzzzzzzzzzzzzzzzzzzz! Pzzzzzzzz! Pzzzzz!" << std::endl;
		std::cout << executor.getName() << " has been robotomised with success."  << std::endl;
		executor.executeForm( *this );
		return ;
	}
}


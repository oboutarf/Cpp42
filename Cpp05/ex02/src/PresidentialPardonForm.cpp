/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:49:34 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/15 05:21:48 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )	{
	std::cout << "PresidentialPardonForm: constructor called" << std::cout;
}

PresidentialPardonForm::PresidentialPardonForm( std::string & type ) : 	{
	std::cout << "PresidentialPardonForm: constructor called with type: [" << this->getName() << "]" << std::cout;
}

PresidentialPardonForm::~PresidentialPardonForm( void )	{
	std::cout << "PresidentialPardonForm: destructor called" << std::cout;
}




	// virtual PresidentialPardonForm( std::string & type);
	// virtual PresidentialPardonForm( PresidentialPardonForm const & ref );
	// virtual PresidentialPardonForm( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute );
	// virtual PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );
	// virtual void				execute( Bureaucrat const & executor );
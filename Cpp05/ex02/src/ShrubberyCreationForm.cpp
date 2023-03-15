/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:49:40 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/15 19:42:55 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void )	{
	std::cout << "ShrubberyCreationForm: constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string & target ) : Form("ShrubberyCreationForm", target, 149, 7)	{
	std::cout << "ShrubberyCreationForm: constructor called with type: [" << this->getName() << "]" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )	{
	std::cout << "ShrubberyCreationForm: destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & ref )	{
	( void )ref;
	std::cout << "ShrubberyCreationForm: copy constructor called" << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )	{
	( void )rhs ;
	return *this ;
}

std::string const ShrubberyCreationForm::getTarget()	const	{
	return this->_target;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor )	{
	if ( !this->checkStatus() && executor.getGrade() > this->getGradeToSign() )	{
		std::cout << "ShrubberyCreationForm: couldn't execute form because form isn't signed and " << executor.getName() << " grade is too low to sign it." << std::endl;
		return ;
	}
	if ( !this->checkStatus() && executor.getGrade() <= this->getGradeToSign() )
		executor.signForm( *this );
	if ( executor.getGrade() <= this->getGradeToExecute() )	{
		std::ofstream	shrubberyFile;
		// shrubberyFile << ;
		shrubberyFile.close();
		executor.executeForm( *this );
		return ;
	}
}
//   ofstream MyFile("filename.txt");
//   MyFile << "Files can be tricky, but it is fun enough!";
//   MyFile.close();
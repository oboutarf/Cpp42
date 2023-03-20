/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:33:00 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/17 09:20:14 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

char const	*Intern::FormUnknown::what(void) const throw()	{
	return ("INVALID::Intern: Form unknown from your intern's database!");
}

Intern::Intern( void )	{
	std::cout << "Intern constructor called" << std::endl;
}

Intern &	Intern::operator=( Intern const & rhs )	{
	( void )rhs ;
	return *this;
}

Intern::Intern( Intern const & ref )	{
	*this = ref;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern( void )	{
	std::cout << "Intern destructor called" << std::endl;
}

Form *	Intern::makeForm( std::string & formToCreate, std::string & targetName )	{

	std::string	knownForms[3] = { "presidential pardon", "shrubbery creation", "robotomy request" };
	Form	*ret = NULL ;

	switch( whatCase( knownForms, formToCreate ) )	{
		case 0 :
			 ret = new PresidentialPardonForm( targetName );
			 break ;
		case 1 :
			 ret = new ShrubberyCreationForm( targetName );
			 break ;
		case 2 :
			 ret = new RobotomyRequestForm( targetName );
			 break ;
		case 3 :
			throw Intern::FormUnknown();
			return NULL ;
		default :
			std::cout << "Intern: can I bring you some coffee? I looooove serving coffee!" << std::endl;
	}
	std::cout << "Intern creates " << formToCreate << "." << std::endl;
	return ret ;
}

int	whatCase( std::string *dataBase, std::string const & assignedForm )	{

	for ( int i = 0; i < 3; i++ )
		if ( dataBase[i] == assignedForm )
			return i ;
	return 3;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:14:42 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/19 17:12:40 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )	{

	Bureaucrat	Boss( "Boss", 1 );
	Bureaucrat	Slave( "Slave", 150 );
	Intern	randomIntern;

	std::string	form = "presidential pardon";
	std::string target = "bob";
	Form *i = randomIntern.makeForm( form, target );
	std::cout << i->getTarget() << std::endl ;
	std::cout << std::endl << std::endl;
	try	{
		form = "bawbaw";
		Form *e = randomIntern.makeForm( form, target );
		std::cout << e->getTarget() << std::endl ;
	}
	catch ( std::exception & e )	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	target = "PresidentialPardonForm ";
	Form	*j = new RobotomyRequestForm(target);
	Form	*k = new ShrubberyCreationForm(target);
	Boss.executeForm( *k );
	Slave.executeForm( *j );
	delete j;
	delete i;
	delete k;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:14:42 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/19 17:14:32 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )	{

	try {
		Bureaucrat	Boss( "Boss", 1 );
		Bureaucrat	Slave( "Slave", 145 );
		std::string target = "bob";
		Form	*i = new PresidentialPardonForm( target );
		std::cout << i->getTarget() << std::endl ;
		target = "PresidentialPardonForm ";
		Form	*j = new RobotomyRequestForm(target);
		Slave.executeForm( *j );
		Form	*k = new ShrubberyCreationForm(target);
		Boss.signForm(*k);
		Boss.executeForm( *k );
		delete i;
		delete j;
		delete k;
	}
	catch ( const std::exception& e )	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}

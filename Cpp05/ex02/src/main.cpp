/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:14:42 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/17 07:07:08 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )	{

	// try {
		Bureaucrat	Boss( "Boss", 1 );
		Bureaucrat	Slave( "Slave", 150 );
	// 	Boss.upGrade();
	// 	for ( int i = 0; i < 149; i++)
	// 		Slave.upGrade();
	// 	std::cout << Slave ;
	// 	std::cout << Boss ;
	// 	Bureaucrat invalidBureaucrat( "invalid", 0 );
	// }
	// catch ( std::exception & e ) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat	Comptability( "Compta", 16 );
	// 	Form 		Document( "Sorties scolaires", 16, 2);
	// 	Comptability.signForm( Document );
	// 	Comptability.signForm( Document );
	// }
	// catch ( std::exception & e )	{
	// 	std::cerr << e.what() << std::endl;
	// }
	std::string target = "bob";
	Form	*i = new PresidentialPardonForm( target );
	std::cout << i->getTarget() << std::endl ;
	target = "PresidentialPardonForm ";
	Form	*j = new RobotomyRequestForm(target);
	i->execute( Boss );
	j->execute( Slave );
	Form	*k = new ShrubberyCreationForm(target);
	k->execute(Boss);
	delete j;
	delete i;
	return (0);
}

// (formulaire de pardon présidentiel) :
// Échelons requis : signature 25, exécution 5
// Informe que la <target> a été pardonnée par Zaphod Beeblebrox.Johnny;

// formulaire de pardon présidentiel) :
// Échelons requis : signature 25, exécution 5
// Informe que la <target> a été pardonnée par Zaphod Beeblebrox.myRequestForm( target );
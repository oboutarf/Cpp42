/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:14:42 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/14 22:30:17 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )	{

	try {
		Bureaucrat	Boss( "Boss", 1 );
		Bureaucrat	Slave( "Slave", 150 );
		Boss.upGrade();
		for ( int i = 0; i < 149; i++)
			Slave.upGrade();
		std::cout << Slave ;
		std::cout << Boss ;
		Bureaucrat invalidBureaucrat( "invalid", 0 );
	}
	catch ( std::exception & e ) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat	Comptability( "Compta", 16 );
		Form 		Document( "Sorties scolaires", 16, 2);
		Comptability.signForm( Document );
		Comptability.signForm( Document );
	}
	catch ( std::exception & e )	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
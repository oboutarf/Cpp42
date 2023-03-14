/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:14:42 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/14 00:25:30 by oboutarf         ###   ########.fr       */
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
		std::cout << e.what() << std::endl;
	}

	return (0);

}
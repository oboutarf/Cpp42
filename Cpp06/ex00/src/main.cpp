/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:41:17 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/22 01:10:03 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

# include <typeinfo>
# include <cmath>


int	main( void )	{
	std::cout << std::endl;

	std::string 	usrInput;
	while (1)
	{
		std::cout << "converter: Please enter a value:" << std::endl << "->  ";
		std::cin >> usrInput;
		Convert	converter( usrInput );
		if ( converter.detectType() < 5 )
			converter.convertTypes();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return ( EXIT_SUCCESS );
}

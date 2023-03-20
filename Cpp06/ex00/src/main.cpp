/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:41:17 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/20 20:08:26 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

#include <typeinfo>

int	main( int ac, char **av )	{
	if ( ac != 2 )	{
		return std::cerr << "Converter: invalid number of arguments" << std::endl, EXIT_FAILURE ;
	}

	std::string arg = av[1];
	Convert	converter( arg );

	converter.detectType();
	converter.convertTypes();
	converter.printTypes();

	return ( EXIT_SUCCESS );
}

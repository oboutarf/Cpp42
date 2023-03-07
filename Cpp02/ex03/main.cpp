/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:25:42 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/07 22:04:49 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( int ac, char **av )	{

	Point	point(1.1, 1.1);
	Point	a(3, 1);
	Point	b(3, 4);
	Point	c(-2, 1);

	int ret = bsp( a, b, c, point );
	if ( !ret )
		std::cout << "| false |" << std::endl;
	else 
		std::cout << "| true |" << std::endl;
	
	return ( EXIT_SUCCESS );
	( void )ac;
	( void )av;
}

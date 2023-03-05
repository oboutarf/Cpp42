/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:32:53 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 01:22:36 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Maestro.hpp"

int	main( int ac, char **av )	{

	Maestro			Center;

	if ( ac != 4 )
		return ( std::cout << INVALID_ARG << std::endl, EXIT_FAILURE );
	Center.openFile( av[1] );
	return ( EXIT_SUCCESS );

}

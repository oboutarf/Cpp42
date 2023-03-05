/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Maestro.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:24:58 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 01:32:01 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Maestro.hpp"

Maestro::Maestro( void )	{

	std::cout << "Maestro Constructor has been called" << std::endl;

}

void	Maestro::openFile( char *fName )	{

	infile.open(fName);
	if ( infile.fail() )	{

		std::cout << INVALID_FILE << std::endl;
		exit( 1 );

	}
	fSwapName = fName;
	fSwapName += ".replace";
	const int len = fSwapName.length();
	char* CharfSwapName = new char[len + 1];
	strcpy(CharfSwapName, fSwapName.c_str());
	outfile.open( CharfSwapName );
	delete[] CharfSwapName;
	if ( outfile.fail() )	{

		std::cout << INVALID_FILE << std::endl;
		exit( 1 );

	}

}


Maestro::~Maestro( void )	{

	std::cout << "Maestro Destructor has been called" << std::endl;

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Maestro.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:24:58 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 17:04:57 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Maestro.hpp"

Maestro::Maestro( char *argFile, std::string toReplace, std::string toInsert ) \
:	toReplace(toReplace), \
	toInsert(toInsert)		{

	openFile( argFile );
	fileSwap( toReplace, toInsert );
	std::cout << "Maestro Constructor has been called" << std::endl;

}

void	Maestro::openFile( char *fName )	{

	infile.open( fName );
	if ( infile.fail() )	{

		std::cout << INVALID_FILE << std::endl;
		exit( 1 );

	}
	fSwapName = fName;
	outfile.open( (fSwapName + ".replace").c_str() );
	if ( outfile.fail() )	{

		std::cout << INVALID_FILE << std::endl;
		exit( 1 );

	}
	char	c ;
	while ( infile.get(c) )
		swapStr += c;
	infile.close();
}

void	Maestro::fileSwap( std::string toReplace, std::string toInsert )	{

	std::string		finalStr;
	size_t			pos = 0;
	size_t			rPos;

	while ( swapStr[pos] )	{

		rPos = swapStr.find( toReplace, pos );
		finalStr += swapStr.substr( pos, rPos - pos );
		if ( rPos == std::string::npos )
			break ;
		finalStr += toInsert;
		pos = rPos + toReplace.size();

	}
	outfile << finalStr;
	outfile.close();

}

Maestro::~Maestro( void )	{

	std::cout << "Maestro Destructor has been called" << std::endl;

}

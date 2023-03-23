/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertTypes.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:00:33 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 00:12:29 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sstream>
#include <cstdlib>
#include "Convert.hpp"

void	Convert::intConvert( void )	{
	unsigned int	i = 0;
	int				neg = 0;
	long			overflow = 0;

	for ( (void)i; (!(this->_arg[i] >= '0' && this->_arg[i] <= '9')) ; i++ )	{
		if ( this->_arg[i] == NEG )
			neg++;
	}
	for ( (void)i; i < this->_arg.size(); i++ )	{
		overflow = overflow * 10 - ( this->_arg[i] - '0');
		if ( overflow < std::numeric_limits<int>::min() || overflow > std::numeric_limits<int>::max() )
			this->_display[ INT ] = false;
		this->_toInt = this->_toInt * 10 - ( this->_arg[i] - '0');
	}
	if ( !(neg % 2) )
		this->_toInt = -this->_toInt;
	this->printInt();
}

void	Convert::floatConvert( void )	{
	this->_toFloat = strtof( this->_arg.c_str(), NULL );
	this->printFloat();
}

void	Convert::charConvert( void )	{
	this->_toChar = this->_arg[0];
	this->printChar();
}

void	Convert::doubleConvert( void )	{
	this->_toDouble = strtod(this->_arg.c_str(), NULL );
	this->printDouble();
}

/* @ Central for conversion of types this function will redirect program
	depending on which type we have detected earlier then we will give the results
	to the printer */
	/* @end of transmission */
void	Convert::convertTypes( void )	{
	if ( this->_type == CHAR )	{
		this->charConvert();
	}
	else if ( this->_type == INT )	{
		this->intConvert();
	}
	else if ( this->_type == DOUBLE )	{
		this->doubleConvert();
	}
	else if ( this->_type == FLOAT )	{
		this->floatConvert();
	}
	else	{
		std::cerr << "converter: weird you shouldn't print that..." << std::endl;
		return ;
	}
}



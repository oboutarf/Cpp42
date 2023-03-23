/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertTypes.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:00:33 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 20:18:57 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	Convert::intConvert( void )	{
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
	if ( !this->printInt() )
		return FAIL ;
	return SUCCESS ;
}

int	Convert::floatConvert( void )	{
	this->_toFloat = strtof( this->_arg.c_str(), NULL );
	if ( !this->printFloat() )
		return FAIL ;
	return SUCCESS ;
}

int	Convert::charConvert( void )	{
	this->_toChar = this->_arg[0];
	if ( !this->printChar() )
		return FAIL ;
	return SUCCESS ;
}

int	Convert::doubleConvert( void )	{
	this->_toDouble = strtod(this->_arg.c_str(), NULL );
	if ( !this->printDouble() )
		return FAIL ;
	return SUCCESS ;
}

/* @ Central for conversion of types this function will redirect program
	depending on which type we have detected earlier then we will give the results
	to the printer */
	/* @end of transmission */
int	Convert::convertTypes( void )	{
	if ( this->_type == CHAR )	{
		if ( !this->charConvert() )
			return FAIL ;
	}
	else if ( this->_type == INT )	{
		if ( !this->intConvert() )
			return FAIL ;
	}
	else if ( this->_type == DOUBLE )	{
		if ( !this->doubleConvert() )
			return FAIL ;
	}
	else if ( this->_type == FLOAT )	{
		if ( !this->floatConvert() )
			return FAIL ;
	}
	else	{
		std::cerr << "converter: weird you shouldn't print that..." << std::endl;
		return SUCCESS ;
	}
	return SUCCESS ;
}


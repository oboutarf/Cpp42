/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertTypes.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:00:33 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/20 22:31:47 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sstream>
#include "Convert.hpp"

void	Convert::intConvert( void )	{
	long	overflow = 0;
	

	for ( unsigned int i = 0; i < this->_arg.size(); i++ )	{
		overflow = overflow * 10 - ( this->_arg[i] - '0');
		if ( overflow < std::numeric_limits<int>::min() )
			this->_display[ INT ] = false;
		this->_toInt = this->_toInt * 10 - ( this->_arg[i] - '0');
	}
}

void	Convert::convertTypes( void )	{

	if ( this->_type == CHAR )	{
	}
	else if ( this->_type == INT )	{
		this->intConvert();
	}
	else if ( this->_type == DOUBLE )	{
	}
	else if ( this->_type == FLOAT )	{
	}
	else	{
		std::cerr << "converter: weird you shouldn't print that..." << std::endl;
		return ;
	}
}

/*	@ C++ -> convert std::string to INT_TYPE	*/
/* 		//approach one
		std::istringstream( this->_arg ) >> this->_toInt;
		std::istringstream( this->_arg ) >> this->_toChar;
		std::istringstream( this->_arg ) >> this->_toDouble;
		std::istringstream( this->_arg ) >> this->_toFloat;

		//approach two
		sscanf(this->_arg.c_str(), "%d", &this->_toInt;); */

		// sscanf( this->_arg.c_str(), "%d", &this->_toInt );
		// sscanf( this->_arg.c_str(), "%f", &this->_toFloat );
		// sscanf( this->_arg.c_str(), "%lf", &this->_toDouble );
		// sscanf( this->_arg.c_str(), "%c", &this->_toChar );

		// std::cout << "char: " << this->_toChar << std::endl;
		// std::cout << "int: " << this->_toInt << std::endl;
		// std::cout << "float: " << this->_toFloat << std::endl;
		// std::cout << "double: " << this->_toDouble << std::endl;

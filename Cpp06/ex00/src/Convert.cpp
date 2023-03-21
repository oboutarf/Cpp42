/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:41 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/21 17:14:27 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdio>


/* @ Constructors and destructors for canonical classes */
	/* end of transmission. @ */
Convert::Convert( void )	{
	// std::cout <<  "Convert: default constructor called" << std::endl;
}

Convert::Convert( std::string &	arg )	{
	this->_arg = arg.c_str();
	this->_type = -1;
	this->_toInt = 0;
	this->_toChar = 0;
	this->_toFloat = 0;
	this->_toDouble = 0;
	for ( int i = 0; i < 4; i++ )	{
		this->_display[i] = true;
	}
	// std::cout <<  "Convert: constructor called with argument" << std::endl;
}

Convert::Convert( Convert const & ref )	{
	( void )ref;
	// std::cout <<  "Convert: copy constructor called" << std::endl;
}

void	Convert::destroyConvert( void )	{
	this->~Convert();
}

Convert &	Convert::operator=( Convert const & rhs )	{
	( void )rhs;
	// std::cout <<  "Convert: assignement operator overload called" << std::endl;
	return *this ;
}

Convert::~Convert( void )	{
	// std::cout <<  "Convert: destructor called" << std::endl;
}

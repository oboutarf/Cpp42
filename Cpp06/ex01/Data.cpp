/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:35:38 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/22 19:39:47 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void )	{
	this->setData( "nothing" );
	std::cout << "Data: default constructor called" << std::endl;
}

Data::Data( const Data & ref )	{
	this->_privateData = ref.seekData();
	std::cout << "Data: copy constructor called" << std::endl;
}

Data &	Data::operator=( const Data & rhs ) {
	this->_privateData = rhs.seekData();
	std::cout << "Data: assignement operator called" << std::endl;
	return *this ;
}

Data::~Data( void )	{
	std::cout << "Data: destructor called" << std::endl;
}

std::string const	Data::seekData( void ) const	{
	return this->_privateData ;
}

void	Data::setData( std::string val )	{
	this->_privateData = val;
}
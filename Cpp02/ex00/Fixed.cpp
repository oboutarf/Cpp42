/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:25:37 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/07 14:02:02 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n(0)	{

	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed( const Fixed& src )	{

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

}

Fixed&	Fixed::operator=( const Fixed& src )	{

	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = src.getRawBits();
	return ( *this );

}

void	Fixed::setRawBits( int const raw )	{

	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;

}

int	Fixed::getRawBits( void ) const		{

	std::cout << "getRawBits member function called" << std::endl;
	return ( this->_n );

}

Fixed::~Fixed( void )	{

	std ::cout << "Destructor called" << std::endl;

}
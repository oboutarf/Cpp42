/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:25:37 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/07 15:32:17 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <tgmath.h>



// [ Constructors ] //

Fixed::Fixed( void ) : _n(0)	{

	std ::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed( const int toFix ) : _n( toFix << this->_nRest )	{

	std ::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed( const float toFix ) : \
	_n( ( int )roundf( toFix * ( 1 << this->_nRest ) ) )	{

	std ::cout << "Float constructor called" << std::endl;

}

Fixed::Fixed( const Fixed& origin )	{

	std::cout << "Copy constructor called" << std::endl;
	*this = origin;

}

// [ Functions ] //

int	Fixed::getRawBits( void ) const		{

	std::cout << "getRawBits member function called" << std::endl;
	return ( this->_n );

}

void	Fixed::setRawBits( int const raw )	{

	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;

}

// [ FixPointFuncs ] //

int	Fixed::toInt( void ) const	{

	return ( _n >> this->_nRest );

}

float	Fixed::toFloat( void ) const	{

	float f = ( float )_n / ( 1 << this->_nRest );

	return ( f );

}

// [ Assignement Operator ] //

Fixed&	Fixed::operator=( const Fixed& src )	{

	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = src.getRawBits();
	return ( *this );

}

// [ STDOUT_FILENO  Operator ] //

std::ostream	&operator<<(std::ostream &out, const Fixed &pFix )	{

	out << pFix.toFloat();

	return ( out );

}

// [ DefaultDestructor ]] //

Fixed::~Fixed( void )	{

	std ::cout << "Destructor called" << std::endl;

}


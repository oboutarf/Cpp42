/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:25:37 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 00:52:22 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <tgmath.h>

// [ Constructors ] //

Fixed::Fixed( void ) : _n(0)	{


}

Fixed::Fixed( const int toFix ) : _n( toFix << this->_nRest )	{


}

Fixed::Fixed( const float toFix ) : \
	 _n( ( int )roundf( toFix * ( 1 << this->_nRest ) ) )	{

}

Fixed::Fixed( const Fixed& origin )	{

	*this = origin;

}

// [ Functions ] //

int	Fixed::getRawBits( void ) const		{

	return ( this->_n );

}

void	Fixed::setRawBits( int const raw )	{

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

	this->_n = src.getRawBits();

	return ( *this );

}

// [ Incrementation/Decrementation Operators ] //

Fixed&	Fixed::operator++( void )	{

	_n += 1;

	return ( *this );

}

Fixed	Fixed::operator++( int )	{

	Fixed tmp = *this;
	_n += 1;

	return ( tmp );

}

Fixed&	Fixed::operator--( void )	{

	_n -= 1;

	return ( *this );
}

Fixed	Fixed::operator--( int )	{

	Fixed tmp = *this;
	_n -= 1;

	return ( tmp );

}

// [ Arithmetic Operateurs ] //

Fixed	Fixed::operator+( const Fixed& src ) const	{

	Fixed	op( toFloat() + src.toFloat() );

	return ( op );

}

Fixed	Fixed::operator-( const Fixed& src ) const	{

	Fixed	op( toFloat() + src.toFloat() );

	return ( op );

}

Fixed	Fixed::operator*( const Fixed& src ) const	{

	Fixed	op( toFloat() * src.toFloat() );

	return ( op );

}

Fixed	Fixed::operator/( const Fixed& src ) const	{

	Fixed	op( toFloat() / src.toFloat() );

	return ( op );ko

}

// [ Comparison Operators ] //

int	Fixed::operator>( const Fixed& src ) const	{

	if ( _n > src._n )
		return ( TRUE );
	return ( FALSE );

}

int	Fixed::operator<( const Fixed& src ) const {

	if ( _n < src._n )
		return ( TRUE );
	return ( FALSE );

}

int	Fixed::operator>=( const Fixed& src ) const	{

	if ( _n >= src._n )
		return ( TRUE );
	return ( FALSE );

}

int	Fixed::operator<=( const Fixed& src ) const	{

	if ( _n >= src._n )
		return ( TRUE );
	return ( FALSE );

}

int	Fixed::operator!=( const Fixed& src ) const	{

	if ( _n != src._n )
		return ( TRUE );
	return ( FALSE );

}

int	Fixed::operator==( const Fixed& src ) const	{

	if ( _n == src._n )
		return ( TRUE );
	return ( FALSE );

}

// [ Max&Min Operator Overload ] //

const Fixed&	Fixed::min( const Fixed& a, const Fixed& b )	{

	if ( a < b )
		return ( a );
	return ( b );

}

const Fixed&	Fixed::max( const Fixed& a, const Fixed& b )	{

	if ( a > b )
		return ( a );
	return ( b );

}

Fixed&	Fixed::min( Fixed& a, Fixed& b )	{

	if ( a < b )
		return ( a );
	return ( b );

}

Fixed&	Fixed::max( Fixed& a, Fixed& b )	{

	if ( a > b )
		return ( a );
	return ( b );

}

// [ STDOUT Operators Overload ] //

std::ostream	&operator<<(std::ostream &out, const Fixed &pFix )	{

	out << pFix.toFloat();

	return ( out );

}

// [ DefaultDestructor ]] //

Fixed::~Fixed( void )	{

}


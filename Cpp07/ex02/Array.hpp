/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:35:31 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/24 16:45:41 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

# include <stdexcept>
# include <iostream>
# include <string>

template <class T> class Array	{

protected:
	unsigned int	_size;
	T*				_container;

public:

// Array Constructors
	Array( void )	{
		this->_size = 0 ;
		this->_container = NULL ;
	}

	Array( unsigned int n )	{
		this->_size = n;
		if ( n > 0 )
			this->_container = new T[ this->size() ];
	}

	Array( const Array & ref )	{
		this->_size = ref.size();
		if ( !this->size() )	{
			this->_container = NULL;
			return ;
		}
		else
			this->_container = new T[ this->size() ];
		for ( unsigned int i = 0; i < this->size(); i++ )	{
			this->_container[i] = ref._container[i] ;
		}
	}

// Size function
	unsigned int	size( void ) const	{
		return this->_size ;
	}

// Array Destructor
	~Array( void )	{
		if ( this->_size )
			delete [] this->_container ;
	}

// Operator Overload
	Array &	operator=( const Array & rhs )	{
		this->~Array();
		this->_size = rhs.size();
		if ( !this->size() )	{
			this->_container = NULL ;
		}
		else
			this->_container = new T[this->size()];
		for ( unsigned int i = 0; i < this->size(); i++ )	{
			this->_container[i] = rhs._container[i] ;
		}
	}

	T const & operator[]( unsigned int n ) const	{
		if ( n < this->size() )
			return this->_container[n];
		throw(std::range_error("Out of range access in Array"));
	}

	T &	operator[]( unsigned int n )	{
		if ( n < this->size() )
			return this->_container[n];
		throw(std::range_error("Out of range access in Array"));
	}

};


#endif
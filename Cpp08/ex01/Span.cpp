/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:09:47 by oscobou           #+#    #+#             */
/*   Updated: 2023/03/26 05:30:27 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()	{
	this->_size = 0;
	this->_sizeMax = 0;
}

Span::Span( unsigned int containSize )	{
	this->_size = containSize;
	this->_sizeMax = containSize;
}

Span::Span( Span const & ref )	{
	this->_contain = ref._contain;
	this->_size = ref.getSize();
	this->_sizeMax = ref.getSizeMax();
}

Span::~Span()	{
}

Span & Span::operator=( Span const & rhs )	{
	this->_contain = rhs._contain;
	this->_size = rhs.getSize();
	this->_sizeMax = rhs.getSizeMax();
	return *this;
}

void	Span::addNumber( int a )	{
	try	{
		if ( !this->_size )
			throw std::overflow_error("STL Container: can't add new element max size is ");
		this->_contain.push_back( a );
		this->_size--;
	}
	catch ( std::overflow_error &e )	{
		std::cerr << e.what() << this->getSizeMax() << "." << std::endl;
	}
}

void		Span::insertContain( int *a )	{
	unsigned int	c = 0;
	unsigned int i = this->getSize();
	for (; i < this->getSizeMax() && a[c]; i++ )	{
		this->_contain.insert(this->_contain.begin() + i, a[c]);
		c++;
	}
	if ( i == this->getSizeMax() && c == sizeof(int *)/sizeof(a[0]))	{
		std::cout << "Can't add more values" << std::endl;
	}
}
// Inserting the value 100 at position 3(0-based indexing) in the vector
// vector_name.insert(vector_name.begin() + 3, 100);

unsigned int	Span::shortestSpan()	{
	Span cpy( *this );
	std::sort( cpy._contain.begin(), cpy._contain.end() );
	std::vector<int>::iterator it = cpy._contain.begin();
	int	shortestSpan = *(it + 1) - *it;
	int	res = 0;
	for (; it + 1 != cpy._contain.end(); *it++ )	{
		if ( *(it + 1) - *it < shortestSpan )
				shortestSpan = res;
	}
	return shortestSpan ;
}

unsigned int	Span::longestSpan()			const {
	unsigned int res = *std::max_element( this->_contain.begin(), this->_contain.end() ) \
		- *std::min_element( this->_contain.begin(), this->_contain.end() );
	return res;
}

unsigned int	Span::getSize( void )		const {
	return this->_contain.size();
}

unsigned int	Span::getSizeMax( void )	const {
	return this->_sizeMax;
}

void	Span::leftSpace( void )				const {
	std::cout << "STL Container: left space in container is " << this->getSizeMax() - this->getSize() << std::endl;
}

void	Span::printer( void ) {
	
	std::cout << "STL Container: Printing values in private attribute '_contain'..." << std::endl << std::endl;
	for (unsigned int i = 0; i < this->getSize(); i++ )	{
		std::cout << "Index ["<< i << "] => "<< this->_contain.at(i) << std::endl;
	}
}
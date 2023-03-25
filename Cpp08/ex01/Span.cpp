/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:09:47 by oscobou           #+#    #+#             */
/*   Updated: 2023/03/25 11:25:38 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
    this->_size = 0;
    this->_contain = NULL;
}

Span::Span( unsigned int containSize )  {
    this->_size = containSize;
    this->_contain = new std::vector<int>( this->_size );
    this->_contain->reserve( this->_size );
}

Span::~Span()   {
    if ( this->_contain && this->_size )
        delete this->_contain;
}
    // Span( Span const & ref );
    // Span & operator=( Span const & ref );


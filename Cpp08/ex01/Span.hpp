/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:59:15 by oscobou           #+#    #+#             */
/*   Updated: 2023/03/25 11:17:52 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span  {

public:
    Span();
    Span( Span const & ref );
    Span( unsigned int containSize );
    ~Span();
    Span & operator=( Span const & ref );
private:
    unsigned int         _size;
    std::vector<int>    *_contain;

};

#endif
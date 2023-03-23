/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:04:20 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 22:59:38 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <class T> T & min( T& a, T& b )	{
	return a < b ? a : b ;
}

template <class T> T & max( T& a, T& b )	{
	return a > b ? a : b ;
}

template <class T> void swap( T& a, T& b )	{
	T c(a);
	a = b;
	b = c;
}

#endif

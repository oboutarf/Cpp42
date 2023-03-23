/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/03/23 23:14:41 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <class T> void	func( T& val )	{
	val %= 2;
}

int main( void ) {
	int arg[4] = {4, 4, 3, 2};
	iter(arg, 4, func );
	for (int i = 0; i < 4; i++)
		std::cout << arg[i] << std::endl;
	return 0;
}


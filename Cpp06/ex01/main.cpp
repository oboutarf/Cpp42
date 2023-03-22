/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:23:23 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/22 19:33:05 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data*		deserialize(uintptr_t raw)	{
	return reinterpret_cast<Data *>( raw ) ;
}

uintptr_t	serialize( Data* ptr )	{
	return reinterpret_cast<uintptr_t>( ptr ) ;
}

int	main( void )	{

	Data *data = new Data();
	std::cout << data << std::endl;
	uintptr_t	ptr = serialize( data );
	std::cout << ptr << " -> our uintptr_t now holds the address" << std::endl;
	Data* ptrData = deserialize( ptr );
	std::cout << ptrData << std::endl;
	return EXIT_SUCCESS ;
}
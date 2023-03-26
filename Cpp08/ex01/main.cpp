/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:58:50 by oscobou           #+#    #+#             */
/*   Updated: 2023/03/26 13:18:47 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main(int, char**)	{
// 	Span	contain(10);

// 	contain.addNumber(999);
// 	contain.addNumber(1);
// 	contain.addNumber(213);
// 	contain.addNumber(7);
// 	contain.addNumber(123);
// 	contain.leftSpace();

// 	try	{
// 		int a[2] = { 2, 5 };
// 		contain.insertContain(a);
// 	}
// 	catch ( std::overflow_error &e )	{
// 		std::cerr << e.what() << contain.getSizeMax() << "." << std::endl;
// 	}
// 	try	{
// 		std::cout << "STL Container: shortest span is " << contain.shortestSpan() << std::endl;
// 		contain.longestSpan();
// 	}
// 	catch ( std::underflow_error & e )	{
// 		std::cout << e.what() << contain.getSize() << std::endl;
// 	}
// 	contain.printer();
// 	return 0;
// }

int	main( void )
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

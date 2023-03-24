/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:31:00 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/24 16:46:49 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
	Array<int>	testEmpty;

	Array<char>	dictionary(26);
	for ( int i = 0; i < 26; i++ )	{
		dictionary[i] = 97 + i ;
	}
	for ( int i = 0; i < 26; i++ )	{
		std::cout << dictionary[i] << std::endl;
	}
	std::cout << "size of dicitionnary: " << dictionary.size() << std::endl;

	Array<char>	LaRousse( dictionary );
	for ( int i = 0; i < 26; i++ )	{
		std::cout << dictionary[i] << std::endl;
	}
	std::cout << "size of dicitionnary: " << dictionary.size() << std::endl;
}
	// Array<int> numbers(MAX_VAL);
	// int* mirror = new int[MAX_VAL];
	// srand(time(NULL));
	// for (int i = 0; i < MAX_VAL; i++)
	// {
	//     const int value = rand();
	//     numbers[i] = value;
	//     mirror[i] = value;
	// }
	// //SCOPE
	// {
	//     Array<int> tmp = numbers;
	//     Array<int> test(tmp);
	// }

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	//     if (mirror[i] != numbers[i])
	//     {
	//         std::cerr << "didn't save the same value!!" << std::endl;
	//         return 1;
	//     }
	// }
	// try
	// {
	//     numbers[-2] = 0;
	// }
	// catch(const std::exception& e)
	// {
	//     std::cerr << e.what() << '\n';
	// }
	// try
	// {
	//     numbers[MAX_VAL] = 0;
	// }
	// catch(const std::exception& e)
	// {
	//     std::cerr << e.what() << '\n';
	// }

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	//     numbers[i] = rand();
	// }
	// delete [] mirror;
	// return 0;
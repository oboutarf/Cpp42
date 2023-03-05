/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:32:53 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 20:32:31 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream> 

# define EXIT_SUCCESS 0

int	main( void )	{

	std::string	brainStr = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brainStr;
	std::string	&stringREF = brainStr;

	std::cout << "Source address of string: " << &brainStr << std::endl;
	std::cout << "stringPtr address: " << &( *stringPTR ) << std::endl;
	std::cout << "stringRef address: " << &stringREF << std::endl;

	std::cout << "Source string: " << brainStr << std::endl;
	std::cout << "stringPtr string: " << *stringPTR << std::endl;
	std::cout << "stringRef string: " << stringREF << std::endl;

	return ( EXIT_SUCCESS );

}

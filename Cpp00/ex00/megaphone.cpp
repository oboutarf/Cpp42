/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:52:04 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/02 00:09:19 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	printUp(char *c)
{
	for (int i = 0; c[i]; i++)
	{
		if (c[i] > 96 && c[i] < 123)
			std::cout << (unsigned char)toupper(c[i]);
		else
			std::cout << c[i];
	}
}

void	megaphone(char **av)
{
	for (int i = 1; av[i]; i++)
	{
		printUp(av[i]);
		if (av[i + 1])
			std::cout << " ";
	}
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		megaphone(av);
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

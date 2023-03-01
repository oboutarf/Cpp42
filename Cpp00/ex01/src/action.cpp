/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:29:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/02 00:50:07 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string		cmd;

	while (!std::cin.eof())
	{
		std::getline(std::cin, cmd);
		std::cout << cmd << std::endl;
	}
	return (0);
}
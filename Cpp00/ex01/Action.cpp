/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Action.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:29:06 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/03 20:59:47 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string		cmd;
	PhoneBook		pBook;

	while (!std::cin.eof())
	{
		std::cin >> cmd;
		if (cmd == "ADD")
			pBook.AddContact();
		else if (cmd == "SEARCH")
			pBook.SearchContact();
		else if (cmd == "EXIT")
			return (0);
	}
	std::cout << std::endl;
	return (0);
}

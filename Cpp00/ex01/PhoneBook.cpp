/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:46:42 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/03 20:59:47 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) : i(0), count_contact(0)
{
	std::cout << "PhoneBook Constructor has been called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "PhoneBook Destructor has been called" << std::endl;
	return ;
}

void	PhoneBook::SearchContact( void )
{
	int	idx = 0;

	if (!count_contact)
	{
		std::cout << "no contact in phonebook for the moment type \'ADD\' to add contact" << std::endl;
		return;
	}
	while (idx < count_contact)
	{
		std::cout << "|" << std::setw(10) << idx << "|";
		rep[idx].SearchPrinter();
		idx++;
	}
	std::cout << "Please enter index of contact: ";
	std::cin >> idx;
	if (std::cin.eof())
		return;
	else if (std::cin.fail())
	{
		std::cin.clear();
		std::cout << "Enter numeric argument" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		SearchContact();
	}
	else if (idx >= count_contact || idx < 0)
	{
		std::cout << "Index does not match any contact" << std::endl;
		SearchContact();
	}
	else if (count_contact > 0)
		rep[idx].PrintContact();
}

void	PhoneBook::PrintContact( void )
{
	int	print = 0;

	while (print < count_contact)
	{
		std::cout << "* Contact Number " << print << " *" << std::endl;
		rep[print].PrintContact();
		print++;
	}
}

void	PhoneBook::AddContact( void )
{
	rep[i].SetContact();
	if (++i == 8)
		i = 0;
	if (count_contact < 8)
		count_contact++;
}

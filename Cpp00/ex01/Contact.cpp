/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:43:10 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/03 22:35:36 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact( void ) : 
first_name(),
last_name(),
nickname(),
phone_number(),
darkest_secret()
{
	std::cout << "Contact Constructor has been called" << std::endl;
	return ;
}

Contact::~Contact( void )
{
	std::cout << "Contact Destructor has been called" << std::endl;
	return ;
}

void	Contact::PrintContact( void )
{
	std::cout << "first name:"
	<< first_name << std::endl
	<< "last name:"
	<< last_name << std::endl
	<< "nickname:"
	<< nickname << std::endl
	<< "phone number:"
	<< phone_number << std::endl
	<< "darkest secret:"
	<< darkest_secret << std::endl;
}

void	Contact::SetContact( void )
{
	std::cout << "Enter first name" << std::endl;
	std::cin >> first_name;
	std::cout << "Enter last name" << std::endl;
	std::cin >> last_name;
	std::cout << "Enter nickname" << std::endl;
	std::cin >> nickname;
	std::cout << "Enter phone number" << std::endl;
	std::cin >> phone_number;
	std::cout << "Enter darkest secret" << std::endl;
	std::cin >> darkest_secret;
	std::cout << "Contact has been added successfully" << std::endl;
}

void Contact::SearchPrinter(void)
{
	std::cout << std::setw(10) << ((first_name.size() > 10) ? std::string(first_name, 0, 9) + "." : first_name);
	std::cout << "|";
	std::cout << std::setw(10) << ((last_name.size() > 10) ? std::string(last_name, 0, 9) + "." : last_name);
	std::cout << "|";
	std::cout << std::setw(10) << ((nickname.size() > 10) ? std::string(nickname, 0, 9) + "." : nickname);
	std::cout << "|";
	std::cout << std::setw(10) << ((first_name.size() > 10) ? std::string(first_name, 0, 9) + "." : first_name);
	std::cout << "|" << std::endl;
}

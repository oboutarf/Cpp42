/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:12:45 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 14:11:52 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <limits>


class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	void 	AddContact( void );
	void 	PrintContact( void );
	void	SearchContact( void );

	private:
	int		i;
	int		count_contact;
	Contact	rep[8];
};

#endif
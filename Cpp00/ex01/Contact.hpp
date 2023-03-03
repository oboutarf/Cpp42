/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:25:53 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/03 20:32:56 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:
	Contact();
	~Contact();
	void	SetContact();
	void	PrintContact();
	void	SearchPrinter();
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif

//  Operator OverLoad
// std::ostream& operator<<(std::ostream& os, const Contact& dt)
// {
//     os << dt.mo << '/' << dt.da << '/' << dt.yr;
//     return os;
// }
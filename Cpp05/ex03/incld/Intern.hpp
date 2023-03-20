/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:32:59 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/17 09:19:13 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern ;

class	Intern	{

public:
	Intern();
	Intern( Intern const & ref );
	Intern &	operator=( Intern const & rhs );
	~Intern();
	Form	*makeForm( std::string & formToCreate, std::string & targetName );

	class FormUnknown;

private:

};

class Intern::FormUnknown : public std::exception	{
	public :
		virtual char const 	*what(void) const throw();
};

int	whatCase( std::string *dataBase, std::string const & assignedForm );

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:41:19 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/15 05:21:30 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include "Form.hpp"
class Form;

class	PresidentialPardonForm :	public Form	{

	public:
	PresidentialPardonForm();
	PresidentialPardonForm( std::string & type );
	PresidentialPardonForm( PresidentialPardonForm const & ref );
	// PresidentialPardonForm( std::string & type, std::string name, unsigned int gradeToSign, unsigned int gradeToExecute );
	virtual PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );
	virtual	~PresidentialPardonForm();

	void						getType();
	virtual void				execute( Bureaucrat const & executor ) ;

private:
	std::string const	_type;
};

#endif
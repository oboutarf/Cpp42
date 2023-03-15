/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:41:19 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/15 19:42:25 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include "Form.hpp"
class Form;

class	PresidentialPardonForm :	public Form	{

	public:
	PresidentialPardonForm();
	PresidentialPardonForm( std::string & target );
	PresidentialPardonForm( PresidentialPardonForm const & ref );
	PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );
	virtual	~PresidentialPardonForm();

	virtual std::string const	getTarget()	const	;
	virtual void				execute( Bureaucrat const & executor ) ;

private:
	std::string const	_type;

};

#endif

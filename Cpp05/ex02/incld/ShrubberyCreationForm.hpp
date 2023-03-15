/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:41:24 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/15 12:37:51 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include "Form.hpp"
class		Form;

class	ShrubberyCreationForm :	public Form	{

	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm( std::string & target );
	ShrubberyCreationForm( ShrubberyCreationForm const & ref );
	ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & rhs );
	virtual	~ShrubberyCreationForm();

	virtual std::string	const	getTarget() const ;
	virtual void				execute( Bureaucrat const & executor ) ;

private:
	std::string const	_target;
};

#endif
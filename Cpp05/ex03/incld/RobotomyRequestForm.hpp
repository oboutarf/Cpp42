/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:41:21 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/15 12:40:51 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

# include "Form.hpp"
class Form;

class	RobotomyRequestForm :	public Form	{

	public:
	RobotomyRequestForm();
	RobotomyRequestForm( std::string & target );
	RobotomyRequestForm( RobotomyRequestForm const & ref );
	RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );
	virtual	~RobotomyRequestForm();

	virtual std::string const	getTarget()	const	;
	virtual void				execute( Bureaucrat const & executor ) ;

private:
	std::string const	_type;
};

#endif

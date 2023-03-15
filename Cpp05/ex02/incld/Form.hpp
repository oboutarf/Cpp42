/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:34:56 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/15 05:13:31 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
class	Bureaucrat ;

class	Form	{

public:
	Form();
	Form( Form const & ref );
	Form( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute );
	virtual Form &	operator=( Form const & rhs );
	virtual ~Form();

	class	GradeTooLowException;
	class	GradeTooHighException;
	class	BureaucratSignedAlready;

	virtual std::string	const	getName() const	;
	virtual bool				checkStatus() const	;
	virtual unsigned int		getGradeToSign() const	;
	virtual unsigned int		getGradeToExecute() const	;
	virtual void				beSigned( Bureaucrat & target );
	virtual void				execute( Bureaucrat const & executor ) = 0;

private:
	std::string const 	_name;
	bool				_isSigned;
	unsigned int		_gradeToSign;
	unsigned int		_gradeToExecute;

};

std::ostream	&operator<<(std::ostream & out, const Form & F );

class Form::GradeTooHighException : public std::exception	{
	public :
		virtual char const 	*what(void) const throw();
};

class Form::GradeTooLowException : public std::exception	{
	public :
		virtual char const 	*what(void) const throw();
};

class Form::BureaucratSignedAlready : public std::exception	{
	public :
		virtual char const 	*what(void) const throw();
};

#endif
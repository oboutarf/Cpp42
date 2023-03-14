/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:10:00 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/14 22:02:16 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

# define GRADE_LIMIT 150

# include "Form.hpp"
class	Form;

class	Bureaucrat	{

public:
	Bureaucrat();
	Bureaucrat( const Bureaucrat & ref );
	Bureaucrat( std::string const & name, int grade );
	~Bureaucrat();

	class	GradeTooHighException;
	class	GradeTooLowException;

	Bureaucrat &		operator=( const Bureaucrat & rhs );
	std::string const &	getName()	const ;
	unsigned int 		getGrade()	const ;
	void				upGrade();
	void				downGrade();
	void				signForm( Form & toSign );

private:
	std::string	const _name;
	unsigned int		_grade;

};

std::ostream	&operator<<(std::ostream & out, const Bureaucrat & B );

class Bureaucrat::GradeTooHighException : public std::exception	{
	public :
		virtual char const 	*what(void) const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception	{
	public :
		virtual char const 	*what(void) const throw();
};


#endif
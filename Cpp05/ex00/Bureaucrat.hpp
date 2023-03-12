/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:10:00 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 17:34:58 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class	Bureaucrat	{

public:
	Bureaucrat();
	Bureaucrat( const Bureaucrat & ref );
	~Bureaucrat();
	Bureaucrat &		operator=( const Bureaucrat & rhs );
	std::string const &	getName();
	unsigned int 		getGrade();
	void				upGrade();
	void				downGrade();

private:
	const std::string	_name;
	unsigned int		_grade;

};



#endif
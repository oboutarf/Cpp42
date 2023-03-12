/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:09 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:40:05 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

# define SUCCESS 1
# define EXIT_SUCCESS 0

# define FAILURE 0
# define EXIT_FAILURE 1

# define ANIMAL_TOTAL 2

class	Animal	{

public:
	Animal();
	Animal( const Animal& ref );
	Animal( std::string name );
	virtual ~Animal();
	std::string		getType() const ;
	virtual void	makeSound() const ;
	Animal &		operator=( const Animal& rhs );

protected:
	std::string	_type;

};

#endif
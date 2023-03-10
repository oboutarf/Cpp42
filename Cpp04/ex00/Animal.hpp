/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:09 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/10 01:14:38 by oboutarf         ###   ########.fr       */
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

class	Animal	{

public:
	Animal();
	Animal( const Animal& ref );
	Animal( std::string name );
	void	operator=( const Animal& rhs );
	~Animal();
	virtual void	makeSound() const ;

protected:
	std::string	_type;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:09 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 18:31:56 by oboutarf         ###   ########.fr       */
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

class	AAnimal	{

public:
	AAnimal();
	AAnimal( const AAnimal& ref );
	AAnimal( std::string name );
	virtual ~AAnimal();
	std::string		getType() const ;
	virtual void	makeSound() const = 0 ;
	void			operator=( const AAnimal& rhs );

protected:
	std::string	_type;

};

#endif
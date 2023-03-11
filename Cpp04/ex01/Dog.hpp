/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:20 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 01:34:49 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Dog : public Animal	{

public:
	Dog();
	Dog( const Dog& ref );
	void	operator=( const Dog& rhs );
	~Dog();

	void	makeSound() const ;

private:
	Brain	*_brain;

};

#endif
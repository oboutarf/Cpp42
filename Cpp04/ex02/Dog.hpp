/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:20 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 18:33:11 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Dog : public AAnimal	{

public:
	Dog();
	Dog( const Dog& ref );
	void	operator=( const Dog& rhs );
	~Dog();
	std::string	haveIdea( int const & i ) const ;
	void		makeSound() const ;
	void		setNewIdea( int const & i, std::string const & NewIdea );

private:
	Brain	*_brain;

};

#endif

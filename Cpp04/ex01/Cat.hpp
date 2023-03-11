/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:15 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 03:27:57 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Cat : public Animal	{

public:
	Cat();
	Cat( const Cat& ref );
	void	operator=( const Cat& rhs );
	~Cat();
	std::string	haveIdea() const ;
	void		makeSound() const ;
	void		setNewIdea( int const & i, std::string const & NewIdea );

private:
	Brain	*_brain;

};

#endif

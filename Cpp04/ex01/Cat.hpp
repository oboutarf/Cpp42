/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:15 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:45:18 by oboutarf         ###   ########.fr       */
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
	Cat &	operator=( const Cat& rhs );
	virtual ~Cat();
	std::string	haveIdea( int const & i ) const ;
	void		makeSound() const ;
	void		setNewIdea( int const & i, std::string const & NewIdea );

private:
	Brain	*_brain;

};

#endif

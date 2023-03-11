/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:15 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 01:37:09 by oboutarf         ###   ########.fr       */
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

private:
	Brain	*_brain;

};

#endif

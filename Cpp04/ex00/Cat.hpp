/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:15 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:24:29 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class	Cat : public Animal	{

public:
	Cat();
	Cat( const Cat& ref );
	Cat &	operator=( const Cat& rhs );
	~Cat();
	virtual void	makeSound() const ;

};

#endif

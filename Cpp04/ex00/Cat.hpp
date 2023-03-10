/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:15 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/10 01:10:13 by oboutarf         ###   ########.fr       */
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
	void	operator=( const Cat& rhs );
	~Cat();
	void	makeSound() const ;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:59:21 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/10 14:25:28 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream> 
# include <string> 

class WrongCat : public WrongAnimal	{

public:
	WrongCat();
	WrongCat( const WrongCat& ref );
	void	operator=( const WrongCat& rhs );
	~WrongCat();

	void	makeSound() const;

};

#endif
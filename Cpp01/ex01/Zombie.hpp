/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:33:37 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 19:21:01 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <limits>
# include <stdlib.h>
# include <iomanip>
# include <iostream>

# define GET_INPUT "Enter number of zombies you wish to create: "

# define FAIL 0
# define SUCCESS 1

# define EXIT_FAIL 1
# define EXIT_SUCCESS 0

# define ERR_DIGIT "Input comports non-numeric characters" 

class Zombie
{
	public:
	Zombie();
	~Zombie();
	void		announce( void ) const;
	void		initName( std::string name );
	private:
	std::string	name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
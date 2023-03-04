/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:26:52 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 16:02:44 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <limits>
# include <iomanip>
# include <iostream>

class Zombie
{
	public:
	Zombie( std::string name );
	~Zombie();
	void		announce( void );
	private:
	std::string	name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
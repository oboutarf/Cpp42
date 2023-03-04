/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:35:55 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 22:54:42 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB	{

public:
	HumanB( std::string name );
	~HumanB();
	void	attack();
	void	setWeapon( Weapon& newWeapon );

private:
	std::string	name;
	Weapon*		usedWeapon;

};

#endif

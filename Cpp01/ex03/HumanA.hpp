/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:35:50 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/04 22:31:10 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA	{

public:
	HumanA( std::string name, Weapon& usedWeapon );
	~HumanA();
	void	attack();

private:
	std::string	name;
	Weapon&		usedWeapon;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:36:12 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 14:30:19 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

# define SUCCESS 1
# define FAILURE 0

# include <iostream>

class ClapTrap	{

public:
	ClapTrap();
	ClapTrap( ClapTrap& rhs );
	ClapTrap( std::string name, int hitP, int EnergyP, int AttackD );
	ClapTrap( std::string id );
	~ClapTrap();

	ClapTrap&	operator=( const ClapTrap& rhs );

public:
	std::string	recupName();
	int			recupHitPoints();
	int			recupAttackDamage();
	int			recupEnergyPoints();
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		attack(const std::string& target);

protected:
	std::string	_name;
	int			_HitPoints;
	int			_AttackDamage;
	int			_EnergyPoints;

};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 07:58:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 08:39:42 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap	{

public:
	DiamondTrap( std::string name );
	DiamondTrap( const DiamondTrap& ref );
	DiamondTrap&	operator=( const DiamondTrap& rhs );
	~DiamondTrap();

	using FragTrap::recupHitPoints;
	using ScavTrap::recupEnergyPoints;
	using FragTrap::recupAttackDamage;
	using ScavTrap::attack;
	
	std::string		DiamondName() const ;
	void			whoAmI();

private:
	std::string	_name;

};

#endif

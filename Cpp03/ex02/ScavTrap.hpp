/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 05:58:08 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 07:16:32 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

# define SUCCESS 1
# define FAILURE 0

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap 	{

public:
	ScavTrap();
	ScavTrap( ScavTrap& rhs );
	ScavTrap( std::string id );
	~ScavTrap();
	ScavTrap&	operator=( const ScavTrap& rhs );
	void		guardGate( void );

protected:

private:


};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 07:17:31 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/08 15:47:40 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

# define SUCCESS 1
# define FAILURE 0

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap 	{

public:
	FragTrap();
	FragTrap( FragTrap& rhs );
	FragTrap( std::string id );
	~FragTrap();
	FragTrap&	operator=( const FragTrap& rhs );
	void		highFivesGuys( void );

protected:

};

#endif
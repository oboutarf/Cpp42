/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:36:04 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 20:37:01 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon	{

public:
	Weapon( std::string instType );
	~Weapon();
	const std::string&	getType();
	void				setType( std::string newType );

private:
	std::string	type;

};

#endif

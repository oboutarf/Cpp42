/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 01:44:38 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 21:50:34 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
# define MATERIA_TOTAL 100

class	Character : public ICharacter	{

public:
	Character();
	Character( std::string const & name );
	Character( Character const & ref );

	Character & operator=( Character const & rhs );

	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void 				equip( AMateria* m );
	virtual void 				unequip(int idx);
	virtual void 				use(int idx, ICharacter& target);
	void						addUsedHistory( AMateria & unEquiped );

private:
	AMateria*	_bagPack[4];
	int			_toUse;
	AMateria*	_usedHistory[ MATERIA_TOTAL ];
	int			_countHistory;
	std::string	_name;

}; 


#endif
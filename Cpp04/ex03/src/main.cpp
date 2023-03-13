/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:41:35 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/13 13:37:10 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

# define SEPARATOR std::cout << std::endl << "= = = = = = = = = = = = = = = = = = = = = = =" << std::endl;


int main()
{
	IMateriaSource* src = new MateriaSource();
	SEPARATOR
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	tmp2 = src->createMateria("cure");
	SEPARATOR
	ICharacter* Character1 = new Character("Character1 ");
	SEPARATOR
	Character1->unequip(0);
	Character1->unequip(1);
	Character1->unequip(1);
	Character1->unequip(0);
	Character1->unequip(3);
	Character1->unequip(65);
	SEPARATOR
	Character1->equip(tmp2);
	Character1->equip(tmp1);
	SEPARATOR
	ICharacter* Character2 = new Character("Character2 ");
	SEPARATOR
	Character1->use(0, *Character2);
	Character1->use(1, *Character2);
	SEPARATOR
	Character2->equip(tmp2);
	Character2->equip(tmp1);
	SEPARATOR
	Character1->unequip(0);
	Character1->unequip(1);
	Character1->unequip(2);
	Character1->unequip(3);
	SEPARATOR
	delete Character2;
	delete Character1;
	SEPARATOR
	delete src;
	delete tmp1;
	delete tmp2;
	SEPARATOR
	return 0;
}

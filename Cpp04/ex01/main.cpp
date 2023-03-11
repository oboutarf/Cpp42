/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:22 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 01:40:29 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"

int	main ( void )	{

	const Animal	*Zoo[ ANIMAL_TOTAL ];

	for ( int i = 0; i < ANIMAL_TOTAL ; i++ )	{

		if ( !i % 2 )
			Zoo[i] = new Dog();
		else
			Zoo[i] = new Cat();
	}
	
	// Dog		*AD = new Dog();
	// Dog		*BD = new Dog();
	Cat		*AC = new Cat();
	Cat		*BC(AC);

	std::cout << AC->haveIdea() << std::endl;
	std::cout << BC->haveIdea() << std::endl;
	
	

	



}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:22 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/13 13:32:26 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"

# define SEPARATOR std::cout << std::endl << "= = = = = = = = = = = = = = = = = = = = = = =" << std::endl;

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

int	main ( void )	{

	const Animal	*Zoo[ ANIMAL_TOTAL ];
	SEPARATOR
	for ( int i = 0; i < ANIMAL_TOTAL ; i++ )	{
		if ( !i % 2 )
			Zoo[i] = new Dog();
		else
			Zoo[i] = new Cat();
	}
	for ( int i = 0; i < ANIMAL_TOTAL; i++ )
		delete Zoo[i];
	SEPARATOR
	Dog		*AD = new Dog();
	Dog		*BD = new Dog();
	Cat		*AC = new Cat();
	SEPARATOR
	Cat		BC(*AC);
	SEPARATOR
	std::cout << AC->haveIdea( 0 ) << std::endl;
	std::cout << BC.haveIdea( 99 ) << std::endl;
	BC.setNewIdea( 99, "Hola Hola" );
	std::cout << BC.haveIdea( 99 ) << std::endl;
	std::cout << BC.haveIdea( 0 ) << std::endl;
	std::cout << AC->haveIdea( 99 ) << std::endl;
	SEPARATOR
	delete AC;
	delete AD;
	delete BD;
	SEPARATOR
	const Animal* j = new Dog();
	const Animal* i = new Dog();
	SEPARATOR
	delete j ; // should not create a leak
	delete i;
	return ( EXIT_SUCCESS );
}

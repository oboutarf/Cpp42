/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:22 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 23:16:42 by oboutarf         ###   ########.fr       */
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

	const AAnimal	*Zoo[ ANIMAL_TOTAL ];
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
	std::cout << AC->haveIdea( 99 ) << std::endl;
	std::cout << BC.haveIdea( 0 ) << std::endl;
	std::cout << AC->haveIdea( 0 ) << std::endl;
	SEPARATOR
	delete AC;
	delete AD;
	delete BD;
	SEPARATOR
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	SEPARATOR
	delete j; //should not create a leak
	delete i;
	SEPARATOR

	return ( EXIT_SUCCESS );
}
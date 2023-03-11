/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:22 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 18:39:20 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

int	main ( void )	{

	// const AAnimal	*Zoo[ ANIMAL_TOTAL ];

	// for ( int i = 0; i < ANIMAL_TOTAL ; i++ )	{

	// 	if ( !i % 2 )
	// 		Zoo[i] = new Dog();
	// 	else
	// 		Zoo[i] = new Cat();
	// }
	
	// for ( int i = 0; i < ANIMAL_TOTAL; i++ )
	// 	delete Zoo[i];

	// Dog		*AD = new Dog();
	// Dog		*BD = new Dog();

	// Cat		*AC = new Cat();
	// std::cout << "===============================" << std::endl;
	// Cat		BC(*AC);
	// std::cout << "===============================" << std::endl;

	// std::cout << AC->haveIdea( 3 ) << std::endl;
	// std::cout << BC.haveIdea( 10 ) << std::endl;
	// BC.setNewIdea( 10, "Hola Hola" );
	// std::cout << AC->haveIdea( 10) << std::endl;
	// std::cout << BC.haveIdea( 10 ) << std::endl;

	// std::cout << "===============================" << std::endl;
	// delete AC;

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j; //should not create a leak
	// delete i;


	return ( EXIT_SUCCESS );
}
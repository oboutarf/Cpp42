/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:25:22 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/10 01:08:20 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int	main ( int ac, char **av )	{

	Animal	PolyMorphed(" PolyMorpher ") ;
	Animal	cat(" Cat ");
	Animal	dog(" Dog ");


	PolyMorphed.makeSound();
	cat.makeSound() ;
	dog .makeSound() ;
	return ( EXIT_SUCCESS );
	( void )av;
	( void )ac;
}
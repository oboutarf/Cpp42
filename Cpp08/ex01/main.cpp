/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:58:50 by oscobou           #+#    #+#             */
/*   Updated: 2023/03/26 05:19:42 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int, char**)	{
	Span	contain(10);

	contain.addNumber(999);
	contain.addNumber(1);
	contain.addNumber(213);
	contain.addNumber(7);
	contain.addNumber(123);
	contain.leftSpace();
	contain.shortestSpan();
	std::cout << "STL Container: container longest span is: " << contain.longestSpan() << std::endl;
	std::cout << "STL Container: container shortest span is: " << contain.shortestSpan() << std::endl;
	try	{
		int a[9] = { 2, 5, 8, 11, 14, 12, 2, 3, 3 };
		contain.insertContain(a);
	}
	catch ( std::overflow_error &e )	{
		std::cerr << e.what() << contain.getSizeMax() << "." << std::endl;
	}
	contain.printer();
	return 0;
}

// int	main( void )
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }


/*

Créez une classe Span pouvant stocker un maxium de N entiers. 

N est une variable de type entier non-signé et sera le seul paramètre passé au constructeur.
Cette classe aura une fonction membre appelée addNumber() afin d’ajouter un seul nombre à la Span.
On l’utilisera pour remplir cette dernière.

Toute tentative d’ajouter un nouvel élément s’il y en a déjà N autres stockés jettera une exception.
Ensuite, implémentez deux fonctions membres : shortestSpan() et longestSpan()

Elles devront respectivement trouver la plus petite distance et la plus grande distance entre les nombres stockés, puis la retourner. 
S’il n’y a aucun nombre stocké, ou juste un, aucune distance ne peut être trouvée.
Par conséquent, jetez une exception.

Bien sûr, implémentez vos propres tests qui devront être bien plus complets que celui donné ci-dessous.
Testez votre Span avec au moins 10 000 nombres.
Vous pouvez tester avec plus de nombres, c’est encore mieux.

Le meilleur pour la fin. Une possibilité qu’il serait utile d’avoir, c’est celle de pouvoir remplir votre Span en utilisant une plage d’itérateurs (range of iterators).
Faire des centaines d’appels à addNumber(), c’est plutôt répétitif.
Implémentez une fonction qui permet d’ajouter plusieurs nombres à votre Span en un appel.

*/

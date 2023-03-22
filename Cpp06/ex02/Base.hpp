/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:48:25 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/22 20:09:42 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

# include <iostream>
# include <stdlib.h>
# include <string>

class	Base	{	public: virtual ~Base();	};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

// Elle crée aléatoirement une instance de A, B ou C et la retourne en tant que pointeur sur
// Base. Utilisez ce que vous souhaitez pour l’implémentation du choix aléatoire.
Base *	generate(void);

// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
void	identify(Base* p);

// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C". Utiliser un pointeur
// dans cette fonction est interdit.
void	identify(Base& p);

#endif

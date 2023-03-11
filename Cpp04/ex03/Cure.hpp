/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:07:59 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 21:19:39 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Materia.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria	{

public:
	Cure();
	Cure( const Cure & ref );
	Cure &	operator=( const Cure & rhs );
	~Cure();
	virtual AMateria*	clone() const ;
	virtual void 		use( ICharacter & target );

};

#endif
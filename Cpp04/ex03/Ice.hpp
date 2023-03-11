/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:08:03 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 21:19:34 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Materia.hpp"

class	Ice	: public AMateria	{

public:
	Ice();
	Ice( const Ice & ref );
	Ice &	operator=( const Ice & rhs );
	~Ice();
	virtual AMateria*	clone() const ;
	virtual void 		use(ICharacter& target);

};

#endif
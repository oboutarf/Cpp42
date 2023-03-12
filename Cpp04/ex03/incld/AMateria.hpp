/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:43:56 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 11:35:24 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria	{

public:
	AMateria();
	AMateria( std::string const & type );
	AMateria( const AMateria & ref );
	virtual ~AMateria();

	AMateria &			operator=( const AMateria & rhs );
	std::string const &	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void 		use( ICharacter& target );

protected:
	std::string	_type;

};

#endif
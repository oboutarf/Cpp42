/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:43:56 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 23:46:00 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

# define FAILURE 0
# define SUCCESS 1

class AMateria	{

public:
	AMateria();
	AMateria( std::string const & type );
	AMateria( const AMateria & ref );
	virtual ~AMateria();
	AMateria &			operator=( const AMateria & rhs );
	virtual AMateria*	clone() const = 0;
	std::string const &	getType() const; //Returns the materia type
	virtual void 		use( ICharacter& target );

protected:
	std::string	_type;

};

#endif
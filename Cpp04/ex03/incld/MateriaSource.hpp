/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 02:04:34 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 18:52:11 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource	{

public:
	MateriaSource();
	MateriaSource( MateriaSource const & ref );
	virtual ~MateriaSource();
	MateriaSource & 	operator=( MateriaSource const & rhs );

	virtual void 		learnMateria( AMateria* );
	virtual AMateria* 	createMateria( std::string const & type );

private:
	AMateria*	_materiaSource[4];
	int			_inventory;


};

#endif
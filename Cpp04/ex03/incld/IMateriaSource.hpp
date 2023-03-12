/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 01:42:40 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/12 02:06:11 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource	{

public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria( AMateria* ) = 0;
	virtual AMateria* createMateria( std::string const & type ) = 0;

};

#endif
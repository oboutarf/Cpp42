/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:07:15 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 03:39:12 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <new>
# include <string>
# include <iostream>

class Brain	{

public:
	Brain();
	Brain( const Brain& ref );
	Brain	&operator=( const Brain& rhs );
	~Brain();
	std::string	haveIdea() const ;
	void		setNewIdea( int const & i, std::string const & NewIdea );
	void		EducateBrain( void );
private:
	std::string	*_ideas;

};

#endif
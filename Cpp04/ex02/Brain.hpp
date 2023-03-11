/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:07:15 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 17:23:02 by oboutarf         ###   ########.fr       */
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
	std::string	haveIdea( int const & i ) const ;
	void		setNewIdea( int const & i, std::string const & newIdea );
	void		EducateBrain( void );
private:
	std::string	_ideas[100];

};

#endif
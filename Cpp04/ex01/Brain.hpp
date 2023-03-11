/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:07:15 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 01:18:56 by oboutarf         ###   ########.fr       */
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
	void	operator=( const std::string& rhs );
	~Brain();
	std::string	haveIdea( void ) const ;
	void		EducateBrain( void );
private:
	std::string	*_ideas;

};

#endif
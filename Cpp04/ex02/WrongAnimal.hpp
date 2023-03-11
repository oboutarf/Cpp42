/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:59:16 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/11 17:54:10 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream> 
# include <string> 

class	WrongAnimal		{

public:
	WrongAnimal();
	WrongAnimal( const WrongAnimal& ref );
	void	operator=( const WrongAnimal& rhs );
	WrongAnimal( std::string name );
	~WrongAnimal();
	std::string	getType() const ;
	void makeSound() const ;

protected:
	std::string	_type;

};

#endif
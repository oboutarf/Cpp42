/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:35:35 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/22 19:38:58 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <sys/types.h>
# include <stdint.h>

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

class	Data	{

public:
	Data();
	Data( const Data & ref );
	Data &	operator=( const Data & rhs );
	~Data();
	std::string	const	seekData() const ;
	void				setData( std::string val );

private:
	std::string	_privateData;
};

#endif
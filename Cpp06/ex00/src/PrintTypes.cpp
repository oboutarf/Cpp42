/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintTypes.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:00:35 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/21 20:39:40 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

void	Convert::printInt( void )	{
	if ( this->_display[ INT ] == true )
	{
		if ( isascii( this->_toInt ) )
			std::cout << "char: " << "'" << static_cast<char>( this->_toInt ) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << this->_toInt << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_toInt) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->_toInt) << std::endl;
	}
	else
		std::cout << "converter: { error } please enter a value between _INT_MIN_ and _INT_MAX_ if you want to convert an 'int' type" << std::endl;
}

void	Convert::printChar( void )	{
	
}

void	Convert::printFloat( void )	{
	
}

void	Convert::printDouble( void )	{
	
}


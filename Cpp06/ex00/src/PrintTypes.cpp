/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintTypes.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:00:35 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/22 01:35:23 by oscobou          ###   ########.fr       */
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
	unsigned long long int	prec;

	std::cout << "converter: enter float precision, it has to be <8:  " << std::endl;
	std::cin >> prec;
	if (prec > 8)	{
		std::cout << "converter: aborted conversion the precision value has to be under 8" << std::endl;
		return ;
	}
	if ( this->_display[ FLOAT ] == true )
	{
		if ( isascii( this->_toInt ) )
			std::cout << "char: " << "'" << static_cast<char>( this->_toFloat ) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(this->_toFloat) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(prec) << this->_toFloat << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(prec) << static_cast<double>(this->_toFloat) << std::endl;
	}
	else
		std::cout << "converter: { error } please enter a value between _FLOAT_MIN_ and _FLOAT_MAX_ if you want to convert a 'float' type" << std::endl;
}

void	Convert::printDouble( void )	{	
}


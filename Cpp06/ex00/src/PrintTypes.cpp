/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintTypes.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:00:35 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 21:49:58 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"
# include <string>

void	Convert::printNan( void )	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
}

void	Convert::printNegInfinity( void )	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inf" << std::endl;
		std::cout << "double: -inff" << std::endl;
}

void	Convert::printPosInfinity( void )	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
}

int	setPrecision( unsigned long long int *prec )	{
	std::string	usr_input;

	std::cout << "converter: enter float & double precision, it has to be <8:  " << std::endl;
	std::cin >> usr_input;
	if (std::cin.eof())
		return FAIL ;
	if ( usr_input.size() > 1 || !isdigit( usr_input.c_str()[0] ) ) {
		std::cout << "converter: aborted conversion the precision value has to be under 8 and a digit number" << std::endl;
		return -1 ;
	}
	( *prec ) = atoi( usr_input.c_str() );
	return SUCCESS ;
}

int	Convert::printInt( void )	{
	unsigned long long int	prec;

	switch	( setPrecision( &prec ) )	{
		case -1 :
			return SUCCESS ;
		case FAIL :
			return FAIL ;
		case SUCCESS : ;
	}
	if ( this->_display[ INT ] == true )
	{
		if ( isascii( this->_toInt ) && this->_toInt >= 32 && this->_toInt != 127 )
			std::cout << "char: " << "'" << static_cast<char>( this->_toInt ) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << this->_toInt << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(prec) << static_cast<float>(this->_toInt) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(prec) << static_cast<double>(this->_toInt) << std::endl;
		return SUCCESS ;
	}
	else	{
		std::cout << "converter: { error } please enter a value between _INT_MIN_ and _INT_MAX_ if you want to convert an 'int' type" << std::endl;
		return SUCCESS ;
	}
}

int	Convert::printChar( void )	{
	unsigned long long int	prec;

	switch	( setPrecision( &prec ) )	{
		case -1 :
			return SUCCESS ;
		case FAIL :
			return FAIL ;
		case SUCCESS : ;
	}
	if ( this->_display[ CHAR ] == true )
	{
		std::cout << "char: '" << this->_toChar << "'"<< std::endl;
		std::cout << "int: " << static_cast<int>( this->_toChar ) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(prec) << static_cast<float>(this->_toChar) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(prec) << static_cast<double>(this->_toChar) << std::endl;
		return SUCCESS ;
	}
	else	{
		std::cout << "converter: { error } please enter a value in the ascii table if you want to convert a 'char' type" << std::endl;
		return SUCCESS ;
	}
}

int	Convert::printFloat( void )	{
	unsigned long long int	prec;

	switch	( setPrecision( &prec ) )	{
		case -1 :
			return SUCCESS ;
		case FAIL :
			return FAIL ;
		case SUCCESS : ;
	}
	if ( this->_display[ FLOAT ] == true )
	{
		if ( isascii( this->_toFloat ) && this->_toFloat && this->_toFloat >= 32 && this->_toFloat != 127 )
			std::cout << "char: " << "'" << static_cast<char>( this->_toFloat ) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if ( this->_toFloat < std::numeric_limits<int>::min() || this->_toFloat > std::numeric_limits<int>::max() )
			std::cout << "int: Non displayable" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(this->_toFloat) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(prec) << this->_toFloat << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(prec) << static_cast<double>(this->_toFloat) << std::endl;
		return SUCCESS ;
	}
	else	{
		std::cout << "converter: { error } please enter a value between _FLOAT_MIN_ and _FLOAT_MAX_ if you want to convert a 'float' type" << std::endl;
		return SUCCESS ;
	}
}

int	Convert::printDouble( void )	{
	unsigned long long int	prec;

	switch	( setPrecision( &prec ) )	{
		case -1 :
			return SUCCESS ;
		case FAIL :
			return FAIL ;
		case SUCCESS : ;
	}
	if ( this->_display[ DOUBLE ] == true )
	{
		if ( isascii( this->_toDouble ) && this->_toDouble && this->_toDouble >= 32 && this->_toDouble != 127 )
			std::cout << "char: '" << static_cast<char>( this->_toDouble ) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if ( this->_toDouble < std::numeric_limits<int>::min() || this->_toDouble > std::numeric_limits<int>::max() )
			std::cout << "int: Non displayable" << std::endl;
		else
			std::cout << "int: " << static_cast<int>( this->_toDouble ) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(prec) << static_cast<float>(this->_toDouble) << "f" << std::endl;
		std::cout << "double: "  << this->_toDouble << std::endl;
		return SUCCESS;
	}
	else	{
		std::cout << "converter: { error } please enter a value in the ascii table if you want to convert a 'char' type" << std::endl;
		return SUCCESS;
	}
}


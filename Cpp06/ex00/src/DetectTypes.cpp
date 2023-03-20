/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectTypes.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:52:19 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/20 22:10:52 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

/* @ Detect different types given by the subject if we find a type */
/* that interests us we return 'FOUND' so that we can give our return */
/* with this type */
	/* end of transmission. @ */
int	Convert::detectChar( void )	{
	if ( this->_arg.size() == 1 && isalpha( this->_arg[0] ) )
		return FOUND ;
	return NOT_FOUND ;
}

int	Convert::detectInt( void )	{
	for ( unsigned long i = 0; i < this->_arg.size(); i++ )
		if ( ( ! ( this->_arg[i] >= '0' && this->_arg[i] <= '9' )) )
			return NOT_FOUND ;
	return FOUND ;
}

int	Convert::detectDouble( void )	{
	int	coma = 0;

	for ( unsigned long i = 0; i < this->_arg.size(); i++ )	{
		if ( this->_arg[i] == COMA )
			coma++;
		else if ( ( ! ( this->_arg[i] >= '0' && this->_arg[i] <= '9')) )
			return NOT_FOUND ;
	}
	if ( coma != 1 )
		return NOT_FOUND ;
	return FOUND ;
}

int	Convert::detectFloat( void )	{
	int	coma = 0;
	int	f = 0;

	for ( unsigned long i = 0; i < this->_arg.size(); i++ )	{
		if ( this->_arg[i] == COMA )
			coma++;
		else if ( this->_arg[i] == FLOATER )
			f++;
		else if ( ( ! ( this->_arg[i] >= '0' && this->_arg[i] <= '9')) )
			return NOT_FOUND ;
	}
	if ( coma != 1 || f != 1 )
		return NOT_FOUND ;
	return FOUND ;
}

/* @ Plateform directing program to detecting funcs */
	/* end of transmission. @ */
int	Convert::detectType( void )	{
	if (this->detectChar())	{
		this->_type = CHAR;
		std::cout << "CHAR_TYPE" << std::endl;
		return 1;
	}
	else if (this->detectFloat())	{
		this->_type = FLOAT;
		std::cout << "FLOAT_TYPE" << std::endl;
		return 2;
	}
	else if (this->detectDouble())	{
		this->_type = DOUBLE;
		std::cout << "DOUBLE_TYPE" << std::endl;
		return 3;
	}
	else if (this->detectInt())	{
		this->_type = INT;
		std::cout << "INT_TYPE" << std::endl;
		return 4;
	}
	else	{
		std::cerr << "Convert: (error) we only treat conversion for { INT_TYPE: 79, CHAR_TYPE: 0, DOUBLE_TYPE: 79.0, FLOAT_TYPE: 79.0f }" << std::endl;
		return 5;
	}
}

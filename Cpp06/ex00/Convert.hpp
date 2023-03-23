/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:44 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 20:19:09 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <ctype.h>
# include <limits>
# include <stdio.h>
# include <sstream>

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1
# define SUCCESS 1
# define FAIL 0
# define NOT_FOUND 0
# define FOUND 1

# define COMA '.'
# define FLOATER 'f'
# define NEG '-'
# define POS '+'

# define OVERFLOW 0
# define INT 0
# define CHAR 1
# define DOUBLE 2
# define FLOAT 3

# define ERROR 42


class Convert	{

public:
//	canonic
	Convert();
	Convert( std::string & arg );
	Convert( Convert const & ref );
	Convert &	operator=( Convert const & rhs );
	~Convert();
//	detect
	int		detectInt( void );
	int		detectChar( void );
	int		detectFloat( void );
	int		detectDouble( void );
	int 	detectScience( void );
//	convert
	int		intConvert( void );
	int		charConvert( void );
	int		floatConvert( void );
	int		doubleConvert( void );
//	print
	void	printNan( void );
	int		printInt( void );
	int		printChar( void );
	int		printFloat( void );
	int		printDouble( void );
	void	printNegInfinity( void );
	void	printPosInfinity( void );
//	central
	int		detectType( void );
	int		convertTypes( void );
	void	errorInput( int key );
	void	destroyConvert( void );

private:
// 	private attributes
	std::string		_arg;
	int				_type;
	int				_toInt;
	char			_toChar;
	float			_toFloat;
	double			_toDouble;
	bool			_neg;
	bool			_display[4];

};

#endif

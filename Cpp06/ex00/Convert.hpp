/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:42:44 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/21 17:28:23 by oboutarf         ###   ########.fr       */
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

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

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
	void	intConvert( void );
	void	charConvert( void );
	void	floatConvert( void );
	void	doubleConvert( void );
//	print
	void	printInt( void );
	void	printChar( void );
	void	printFloat( void );
	void	printDouble( void );
//	central
	int		detectType( void );
	void	convertTypes( void );
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

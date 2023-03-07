/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:25:39 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/07 01:11:58 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

# define SUCCESS 1
# define FAIL 0

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

class	Fixed	{

public:		// [ ConstructorsDestructors ] //
	Fixed();
	Fixed( const Fixed &origin );
	Fixed( const float toFix );
	Fixed( const int toFix );
	~Fixed();

public:		// [ OverloadOperator ] //
	Fixed&	operator=( const Fixed& src );

public:		// [ Member: VariableAndFuncs ] //
	int		toInt( void ) const;
	float	toFloat( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int					_n;
	static const int	_nRest = 8;

};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed );

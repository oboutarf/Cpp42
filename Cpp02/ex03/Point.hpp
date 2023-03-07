/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:45:07 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/07 20:33:08 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point		{

public:
	Point();
	Point( const Point& src );
	Point( const Fixed x, const Fixed y );
	Point( const float x, const float y );

	Fixed	recupX() const ;
	Fixed	recupY() const ;

	Point& operator=( const Point& rhs );

	~Point();

private:
	Fixed	const _x;
	Fixed	const _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
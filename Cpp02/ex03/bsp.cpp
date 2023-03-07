/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:44:57 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/07 21:52:40 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)	{

	Fixed	res0;
	Fixed	res1;
	Fixed	res2;

	res0 = ( a.recupX() - point.recupX() ) * ( b.recupY() - point.recupY() ) \
		- ( a.recupY() - point.recupY()) * ( b.recupX() - point.recupX() );
	res1 = ( b.recupX() - point.recupX() ) * ( c.recupY() - point.recupY() ) \
		- ( b.recupY() - point.recupY()) * ( c.recupX() - point.recupX() );
	res2 = ( c.recupX() - point.recupX() ) * ( a.recupY() - point.recupY() ) \
		- ( c.recupY() - point.recupY()) * ( a.recupX() - point.recupX() );

	if ( ( res0 < 0 && res1 < 0 && res2 < 0 ) \
		|| ( res0 > 0 && res1 > 0 && res2 > 0 ) )
		return ( true );
	return ( false );

}

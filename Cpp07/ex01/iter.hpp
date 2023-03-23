/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:54:56 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/23 23:07:38 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <class T> void	iter( T *tab, std::size_t len, void ( *f )( T & iter ))	{
	for ( std::size_t i = 0; i < len; i++ )
		f(tab[i]);
}

#endif
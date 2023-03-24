/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:45:34 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/24 22:28:59 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template <typename T> void	easyfind( T const & contain, int n )	{
	std::list<int>::const_iterator findIter = std::find( contain.begin(), contain.end(), n );
	if ( findIter == contain.end() )	{
		std::cout << "easyfind: Value not in container" << std::endl;
		return ;
	}
	std::cout << "easyfind: Value was successfully found in container" << std::endl;
}

#endif

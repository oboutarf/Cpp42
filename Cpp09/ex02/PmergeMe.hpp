/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:02:52 by oboutarf          #+#    #+#             */
/*   Updated: 2023/04/01 16:30:48 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <iterator>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <limits>
# include <vector>
# include <deque>
# include <ctime>
# include <cmath>

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1
# define SUCCESS 1
# define FAIL 0

class	PmergeMe	{
	
public:
	PmergeMe();
	PmergeMe( const PmergeMe & ref );
	~PmergeMe();
	PmergeMe &	operator=( const PmergeMe & rhs );
private:

};


#endif
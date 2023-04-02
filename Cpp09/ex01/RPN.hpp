/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:34:42 by oboutarf          #+#    #+#             */
/*   Updated: 2023/04/02 13:43:19 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1
# define FAIL 0
# define SUCCESS 1

# include <iostream>
# include <climits>
# include <cstring>
# include <string>
# include <cmath>
# include <stack>
# include <list>

class	RPN	{

public:
	RPN();
	RPN( const RPN & ref );
	~RPN();
	RPN &	operator=( const RPN & rhs );

private:

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:59:15 by oscobou           #+#    #+#             */
/*   Updated: 2023/03/26 05:12:09 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <vector>

class Span	{

public:
	Span();
	Span( Span const & ref );
	Span( unsigned int containSize );
	~Span();
	Span &			operator=( Span const & rhs );
	void			addNumber( int a );
	void			insertContain( int *a );
	unsigned int	getSize()		const;
	void			leftSpace()		const;
	unsigned int	getSizeMax()	const;
	unsigned int	shortestSpan()	;
	unsigned int	longestSpan()	const;
	void			printer();

private:
	unsigned int		_size;
	unsigned int		_sizeMax;
	std::vector<int>	_contain;

};

#endif
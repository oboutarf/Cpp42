/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:28:38 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/26 17:58:55 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T> class MutantStack : public std::stack<T>	{

public:
	MutantStack() : std::stack<T>()									{}
	MutantStack &	operator=( const MutantStack & rhs )			{ std::stack<T>::operator=( rhs ); }
	MutantStack( MutantStack const & ref ) : std::stack<T>( ref )	{}
	virtual ~MutantStack()											{}

	typedef typename	std::stack<T>::container_type::iterator			iterator;
	typedef typename	std::stack<T>::container_type::const_iterator	const_iterator;
	iterator		begin() 										{ return std::stack<T>::c.begin(); }
	iterator		end() 											{ return std::stack<T>::c.end(); }
	const_iterator	begin() const									{ return std::stack<T>::c.begin(); }
	const_iterator	end() 	const									{ return std::stack<T>::c.end(); }
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:27:49 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/26 17:58:29 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	MutantStack<int>	stk(mstack);
	MutantStack<int>::iterator	it1 = stk.begin();
	std::cout << "STL Containers: new Mutant constructed by copy has size " << stk.size() << std::endl;
	for (; it1 != stk.end(); it1++ )	{
		std::cout << "Value is [" << *it1 << "]" << std::endl;
	}
	return 0;
}
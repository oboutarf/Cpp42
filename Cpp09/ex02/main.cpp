/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:05 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/31 20:08:34 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"
# include <algorithm>
# include <iterator>
# include <iostream>
# include <cstdlib>
# include <vector>
# include <deque>

typedef std::vector<std::pair<int, int> >	vPair;
typedef std::deque<std::pair<int, int> >	dPair;
typedef std::vector<int>					vCt;
typedef std::deque<int>						dCt;

template <typename T>void	printRes(T & vec)	{
	std::cout << std::endl << "[ ";
	typename T::iterator it = vec.begin();
	for (size_t i = 0; it != vec.end(); it++)	{
		std::cout << *it;
		if (i + 1 != vec.size())
			std::cout << " - ";
		i++;
	}
	std::cout << " ]" << std::endl << std::endl;
}

template <typename T, typename U> void	insertIt(T & vec, U it)	{
	unsigned int i = 0;
	for (i = 0; i < vec.size(); i++)	{
		if (vec[i] == it->first)
			break ;
	}
	for (; i < vec.size() && vec[i] < it->second; i++)	{}
	vec.insert(vec.begin() + i, it->second);
}

void	randGen(vCt &	vec)	{
	srand((unsigned) time(NULL));
	int	offset = 100;
	for(int i = 0; i <= 11; i++)	{
		int random = offset + (rand() % 101);
		vec.push_back(random);
		offset++;
	}
}

template <typename T, typename U> void	mergePair(T & sort, U & vec, int *last, int odd)	{
	for (size_t i = 0; i < vec.size(); i += 2)	{
		if (odd && i + 1 == vec.size())	{
			*last = vec[i];
			break ;
		}
		int	A = vec[i];
		int	B = vec[i + 1];
		sort.push_back(std::make_pair(std::min(A, B), std::max(A, B)));
	}
	vec.clear();
	(void)odd;
}

template <class T, typename V> void	sortIt(T & toSort, V & toInsert, int last, int odd )	{
	typename T::iterator	it = toSort.begin();
	typename T::iterator	ite = toSort.end();
	std::sort(it, ite);
	for (; it != ite; it++)	{
		if (odd && last >= it->first)
			toInsert.push_back(last);
		else
			toInsert.push_back(it->first);
	}
}

int main()
{
	vPair	sortv(0);
	dPair	sortd(0);
	vCt		vecOrig;
	vCt		vec;
	dCt		deq;

	int	odd = vec.size() % 2;
	int	last = 0;
	randGen(vecOrig);
	vec.insert(vec.begin(), vecOrig.begin(), vecOrig.end());
	mergePair(sortv, vec, &last, odd);
	sortIt(sortv, vec, last, odd);
	while (sortv.size())	{
		insertIt(vec, sortv.end() - 1);
		sortv.pop_back();
	}
	printRes(vec);
	last = 0;
	deq.insert (deq.begin(), vecOrig.begin(), vecOrig.end());
	mergePair(sortd, deq, &last, odd);
	sortIt(sortd, deq, last, odd);
	while (sortd.size())	{
		insertIt(deq, sortd.end() - 1);
		sortd.pop_back();
	}
	printRes(deq);

	return 0;
}

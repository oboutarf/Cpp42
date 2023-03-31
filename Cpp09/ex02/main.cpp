/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:05 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/31 22:22:08 by oscobou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

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
	for(int i = 0; i < 30; i++)	{
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

void	displayStats(vCt o, vCt v, double tV, double tD)	{
	std::cout << "Before: ";
	for (vCt::iterator it = o.begin(); it != o.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << "After: ";
	for (vCt::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << "Time to process a range of " << v.size() << " elements with std::vector<int> ";
	std::cout << ": " << std::fixed << std::setprecision(6) << tV << " us" << std::endl;
	std::cout << "Time to process a range of " << v.size() << " elements with std::deque<int> ";
	std::cout << ": " << std::fixed << std::setprecision(6) << tD << " us" << std::endl;
}


int main()
{
	vPair	sortv(0);
	dPair	sortd(0);
	vCt		vecOrig;
	vCt		vec;
	dCt		deq;

	randGen(vecOrig);
	clock_t startSort = clock();
	int	last = 0;
	vec.insert(vec.begin(), vecOrig.begin(), vecOrig.end());
	int	odd = vec.size() % 2;
	mergePair(sortv, vec, &last, odd);
	sortIt(sortv, vec, last, odd);
	while (sortv.size())	{
		insertIt(vec, sortv.end() - 1);
		sortv.pop_back();
	}
	double timeV = (double)(clock() - startSort) / CLOCKS_PER_SEC;
	last = 0;
	startSort = clock();
	deq.insert (deq.begin(), vecOrig.begin(), vecOrig.end());
	mergePair(sortd, deq, &last, odd);
	sortIt(sortd, deq, last, odd);
	while (sortd.size())	{
		insertIt(deq, sortd.end() - 1);
		sortd.pop_back();
	}
	double timeD = (double)(clock() - startSort) / CLOCKS_PER_SEC;
	displayStats(vecOrig, vec, timeV, timeD);
	return 0;
}

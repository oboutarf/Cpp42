/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:51:57 by oboutarf          #+#    #+#             */
/*   Updated: 2023/04/02 13:56:47 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

// typedef
typedef std::vector<std::pair<unsigned int, unsigned int> >	vPair;
typedef std::deque<std::pair<unsigned int, unsigned int> >	dPair;
typedef std::vector<unsigned int>					vCt;
typedef std::deque<unsigned int>						dCt;
// display
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

void	displayStats(vCt o, vCt v, double tV, double tD)	{
	std::cout << "Before: ";
	for (vCt::iterator it = o.begin(); it != o.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << "After: ";
	for (vCt::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << "Time to process a range of " << v.size() << " elements with std::vector<int> ";
	std::cout << ": " << tV << " µs" << std::endl;
	std::cout << "Time to process a range of " << v.size() << " elements with std::deque<int> ";
	std::cout << ": " << tD << " µs" << std::endl;
}
// tools
bool	checkSorted(vCt v)	{
	for (size_t i = 0; i < v.size(); i++)	{
		if (i + 1 == v.size())
			return true;
		else if (v[i] > v[i + 1])
			return false;
	}
	return true;
}

bool	checkDigits(char* a)	{
	for (unsigned int i = 0; a[i]; i++)
		if (a[i] < '0' || a[i] > '9')
			return false;
	return true;
}

void	randGen(vCt &	vec)	{
	srand((unsigned) time(NULL));
	int	offset = 100;
	for(int i = 0; i < 10; i++)	{
		unsigned int random = offset + (rand() % 101);
		vec.push_back(random);
		offset++;
	}
}
// algo
template <typename T, typename U> void	insertIt(T & vec, U it)	{
	unsigned int i = 0;
	for (i = 0; i < vec.size(); i++)	{
		if (vec[i] == it->first)
			break ;
	}
	for (; i < vec.size() && vec[i] < it->second; i++)	{}
	vec.insert(vec.begin() + i, it->second);
}

template <typename T, typename U> void	mergePair(T & sort, U & vec, unsigned int *last, int odd)	{
	for (size_t i = 0; i < vec.size(); i += 2)	{
		if (odd && i + 1 == vec.size())	{
			*last = vec[i];
			break ;
		}
		unsigned int	A = vec[i];
		unsigned int	B = vec[i + 1];
		sort.push_back(std::make_pair(std::min(A, B), std::max(A, B)));
	}
	vec.clear();
}

template <class T, typename V> void	sortIt(T & toSort, V & toInsert, unsigned int last, int odd )	{
	typename T::iterator	it = toSort.begin();
	typename T::iterator	ite = toSort.end();
	std::sort(it, ite);
	for (int l = 0; it != ite;)	{
		if (odd && !l && last >= it->first && it + 1 == ite)	{
			toInsert.push_back(it->first);
			toInsert.push_back(last);
			it++; l++;
		}
		else if (odd && !l && last <= it->first)	{
			toInsert.push_back(last);
			toInsert.push_back(it->first);
			it++; l++;
		}
		else	{
			toInsert.push_back(it->first);
			it++;
		}
	}
}
// main
int main(int ac, char **av)
{
	vPair	sortv(0);
	dPair	sortd(0);
	vCt		vecOrig;
	vCt		vec;
	dCt		deq;

	if (ac == 1)
		return std::cout << "PmergeMe: [ERROR] bad number of arguments" << std::endl, 1;
	for (int i = 1; i < ac; i++)	{
		if (!checkDigits(av[i]))
			return std::cout << "PmergeMe: [ERROR] detected a non-digit character in arguments" << std::endl, 1;
		long long v = atoll(av[i]);
		if (v < 0 || v > std::numeric_limits<unsigned int>::max())
			return std::cout << "PmergeMe: [ERROR] detected a overflow or value is negative" << std::endl, 1;
		vecOrig.push_back(v);
	}
	if (vecOrig.size() == 1 || checkSorted(vecOrig) == true)
		return std::cout << "PmergeMe: [ERROR] array is already sorted" << std::endl, 1;
	unsigned int	last = 0;
	clock_t startSort = clock();
	vec.insert(vec.begin(), vecOrig.begin(), vecOrig.end());
	int	odd = vec.size() % 2;
	mergePair(sortv, vec, &last, odd);
	sortIt(sortv, vec, last, odd);
	while (sortv.size())	{
		insertIt(vec, sortv.end() - 1);
		sortv.pop_back();
	}
	double timeV = ((double)(clock() - startSort) / CLOCKS_PER_SEC) * 1000000;
	last = 0;
	startSort = clock();
	deq.insert (deq.begin(), vecOrig.begin(), vecOrig.end());
	mergePair(sortd, deq, &last, odd);
	sortIt(sortd, deq, last, odd);
	while (sortd.size())	{
		insertIt(deq, sortd.end() - 1);
		sortd.pop_back();
	}
	double timeD = ((double)(clock() - startSort) / CLOCKS_PER_SEC) * 1000000;
	displayStats(vecOrig, vec, timeV, timeD);
	return 0;
}

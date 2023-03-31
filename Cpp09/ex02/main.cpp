/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:05 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/31 03:48:55 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"
# include <algorithm>
# include <iterator>
# include <iostream>
# include <cstdlib>
# include <vector>

typedef std::vector<std::pair<int, int> > vPair;
typedef std::vector<int> vCt;

void	printVec(vCt vec)	{
	std::cout << std::endl << "[ ";
	vCt::iterator it = vec.begin();
	for (size_t i = 0; it != vec.end(); it++)	{
		std::cout << *it;
		if (i + 1 != vec.size())
			std::cout << " - ";
		i++;
	}
	std::cout << " ]" << std::endl << std::endl;
}

void	insertIt(vCt & vec, vPair::iterator it)	{
	unsigned int i = 0;
	for (unsigned int i = 0; i < vec.size(); i++)	{
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

void	mergePair(vPair & sort, vCt & vec, int *last, int odd)	{
	for (size_t i = 0; i < vec.size(); i += 2)	{
		if (odd && i + 1 == vec.size())	{
			*last = vec[i];
			break ;
		}
		int A = vec[i];
		int B = vec[i + 1];
		sort.push_back(std::make_pair(std::min(A, B), std::max(A, B)));
	}
	vec.clear();
	vPair::iterator it = sort.begin();
	vPair::iterator ite = sort.end();
	std::sort(it, ite);
	for (; it != ite; it++)	{
		if (odd && *last >= it->first)
			vec.push_back(*last);
		else
			vec.push_back(it->first);
	}
}

int main()
{
	vPair	sort(0);
	vCt		vec;
	int	odd = vec.size() % 2;
	int	last = 0;
	randGen(vec);
	mergePair(sort, vec, &last, odd);
	while (sort.size())	{
		insertIt(vec, sort.end() - 1);
		sort.pop_back();
	}
	printVec(vec);
	return 0;
}

// system("shuf -i 1-1000 -n 3000 | tr \"\\n\" \" \"");
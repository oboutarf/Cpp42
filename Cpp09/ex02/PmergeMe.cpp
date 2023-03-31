/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:02:50 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/30 15:15:48 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe()	{}

PmergeMe::PmergeMe( const PmergeMe & ref )	{ (void)ref; }

PmergeMe &	PmergeMe::operator=( const PmergeMe & rhs )	{ (void)rhs; return *this; }

PmergeMe::~PmergeMe()	{}

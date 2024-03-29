/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:41:27 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/30 14:54:42 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()	{}

RPN::RPN( const RPN & ref )	{ (void)ref; }

RPN &	RPN::operator=( const RPN & rhs )	{ (void)rhs; return *this; }

RPN::~RPN()	{}

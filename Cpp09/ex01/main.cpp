/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:05 by oboutarf          #+#    #+#             */
/*   Updated: 2023/04/01 15:17:21 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"
# include <cstring>

float scanNum(char ch)	{
	int value;
	value = ch;
	return float(value - '0');
}

int isOperator(char ch)	{
	if (ch == '+'|| ch == '-'|| ch == '*'|| ch == '/')
		return 1;
	return 0;
}

int isOperand(char ch)	{
   if(ch >= '0' && ch <= '9')
	  return 1;
   return 0;
}

float operation(int a, int b, char op){
	if(op == '+')
		return b + a;
	else if(op == '-')
		return b - a;
	else if(op == '*')
		return b * a;
	else if(op == '/')
		return b / a;
	else
		return INT_MIN;
}

float	postfixEval(std::string postfix)	{
	std::stack<float> data;
	std::string::iterator it;
	int	opd = 0;
	int a, b;

	for(it = postfix.begin(); it != postfix.end(); it++)	{
		if(isOperator(*it))	{
			if (opd <= 1)
				return std::cout << "ERROR" << std::endl, 0.0f;
			a = data.top();
			data.pop();
			b = data.top();
			data.pop();
			data.push(operation(a, b, *it));
			opd--;
		}
		else if(isOperand(*it))	{
			data.push(scanNum(*it));
			opd++;
		}
	}
	return data.top();
}

int	main(int ac, char **av)	{
	int res;
	if (ac != 2)
		return std::cout << "Error" << std::endl, 0;
	std::string	input = av[1];
	char key[] = "(),.";
	if (!strpbrk (input.c_str(), key))	{
		res = postfixEval(input);
	}
	else
		return std::cout << "Error: bad input" << std::endl, 1;
	std::cout << "The result is: " << res << std::endl;
}


// std::string post = "7 7 * 7 -";
// std::string post = "1 2 * 2 / 2 * 2 4 - +";
// std::string post = "8 9 * 9 - 9 - 9 - 4 - 1 +";
// std::string post = "(1 + 1)";
// $> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
// 42
// $> ./RPN "7 7 * 7 -"
// 42
// $> ./RPN "1 2 * 2 / 2 * 2 4 - +"
// 0
// $> ./RPN "(1 + 1)"
// Error
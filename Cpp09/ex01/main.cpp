/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscobou <oscobou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:05 by oboutarf          #+#    #+#             */
/*   Updated: 2023/04/02 11:34:18 by oscobou          ###   ########.fr       */
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

float operation(int a, int b, char op)	{
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
				throw std::invalid_argument("RPN: Error: cannot treat because input doesn't respect RPN syntax");
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
		return std::cout << "RPN: Error: bad number of arguments" << std::endl, EXIT_FAILURE;
	std::string	input = av[1];
	if (!input.size())
		return std::cout << "RPN: Error: cannot operate empty string" << std::endl, EXIT_FAILURE;
	char key[] = "(),.";
	int	digit = 0;
	for (unsigned int i = 0; i < input.size(); i++)	{
		if (isOperand(input[i]))
			digit++;
	}
	if (!digit)
		return std::cout << "RPN: Error: cannot treat because input doesn't respect RPN syntax" << std::endl, EXIT_FAILURE;
	if (!strpbrk (input.c_str(), key))	{
		try {
			res = postfixEval(input);
		}
		catch (std::exception &	e)	{
			return std::cout << e.what() << std::endl, EXIT_FAILURE;
		}
	}
	else
		return std::cout << "RPN: Error: bad input" << std::endl, EXIT_FAILURE;
	std::cout << "RPN: The result is: " << res << std::endl;
	return (EXIT_SUCCESS);
}

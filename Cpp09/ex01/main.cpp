/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:13:05 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/30 19:40:43 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

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

int isOperand(char ch){
   if(ch >= '0' && ch <= '9')
	  return 1;
   return 0;
}

float operation(int a, int b, char op){
	//Perform operation
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

float postfixEval(std::string postfix){
	std::stack<float> data;
	std::string::iterator it;
	int a, b;

	for(it = postfix.begin(); it != postfix.end(); it++){
		if(isOperator(*it))	{
			a = data.top();
			data.pop();
			b = data.top();
			data.pop();
			data.push(operation(a, b, *it));
		}
		else if(isOperand(*it))
			data.push(scanNum(*it));
	}
	return data.top();
}

int	main(){
	// std::string post = "8 9 * 9 - 9 - 9 - 4 - 1 +";
	std::string post = "(1 + 1)";

	std::cout << "The result is: "<< postfixEval(post) << std::endl;
}


// $> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
// 42
// $> ./RPN "7 7 * 7 -"
// 42
// $> ./RPN "1 2 * 2 / 2 * 2 4 - +"
// 0
// $> ./RPN "(1 + 1)"
// Error
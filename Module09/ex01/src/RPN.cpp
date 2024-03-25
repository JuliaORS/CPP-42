/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:20:34 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/25 12:54:41 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string input) {
	operateStack(input);
}

RPN::RPN(const RPN & src){
	*this = src;
}

RPN::~RPN(){
}

RPN & RPN::operator=(const RPN & src) {
	if (this != &src){
		this->_st = src.getStack();
	}
	return (*this);
}

//getters
std::stack<double>	RPN::getStack() const {
	return(this->_st);
}

//utils
bool isOperator(char c){
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	else
		return (false);
}

double	executeOperation(double num1, double num2, char op){
	switch (op)
	{
		case '+':
			return (num1 + num2);
		case '-':
			return (num1 - num2);
		case '*':
			return (num1 * num2);
		case '/':
			return (num1 / num2);
	}
	return 0;
}

//functions
void	RPN::operateStack(std::string input){
	size_t i = 0;
	if (input.size() < 5)
		throw std::invalid_argument("invalid input.");
	while(i < input.size()){
		if (isdigit(input[i])){
			_st.push(input[i] - '0');
		}
		else if (isOperator(input[i]) && (_st.size() > 1)){
			double num1 = _st.top();
			_st.pop();
			double num2 = _st.top();
			_st.pop();
			_st.push(executeOperation(num2, num1, input[i]));
		}
		else
			throw std::invalid_argument("invalid input.");
		i++;
		if (input[i] != ' ' && i < input.size() - 1)
			throw std::invalid_argument("invalid input.");
		i++;
	}
	if (_st.size() > 1)
		throw std::invalid_argument("invalid input.");
	std::cout << _st.top() << std::endl;
}


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
}

//functions
void	RPN::operateStack(std::string input){
	int i = 0;
	while(i < input.length()){
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
			throw std::invalid_argument("invalid input.1");
		i++;
		if (input[i] != ' ' && i < input.length() - 1)
			throw std::invalid_argument("invalid input.2");
		i++;
	}
	if (_st.size() > 1)
		throw std::invalid_argument("invalid input.3");
	std::cout << _st.top() << std::endl;
}

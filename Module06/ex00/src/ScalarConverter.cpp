/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:17:44 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 11:17:44 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter & src){
	*this = src;
}

ScalarConverter::~ScalarConverter(){
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & src) {
	(void)src;
	return (*this);
}

//Utils
static int ft_strlen(const std::string & str){
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

static bool ft_isdigit(char c){
	if (c >= 0 + '0' && c <= 9 + '0')
		return (true);
	else
		return (false);
}

//FUNCTIONS
static bool	detectIfChar(const std::string & input){
	if (ft_strlen(input) != 3)
		return (false);
	if (input[0] != '\'' || input[2] != '\'' || input[1] < 32 || input[1] > 126)
		return (false);
	return (true);
}

static bool	detectIfInt(const std::string & input){
	int i = 0;
	if (input[0] == '-')
		i++;
	while (i < ft_strlen(input)){
		if (!ft_isdigit(input[i])){
			return (false);
		}
		i++;
	}
	try {
		std::stoi(input);
	} catch (const std::exception& e) {
		return false;
	}
	return (true);
}

static bool	detectIfFloat(const std::string & input){

	if (input == "nanf" || input == "-inff" || input == "+inff")
		return (true);
	if ((input[0] != '-' && !ft_isdigit(input[0])) || input[ft_strlen(input) - 1] != 'f')
		return (false);
	int i=0;
	bool point = false;
	if (input[0] == '-')
		i++;
	while (i < ft_strlen(input) - 1){
		if (!ft_isdigit(input[i]) && input[i] != '.')
			return (false);
		if (input[i] == '.' && point)
			return (false);
		if (input[i] == '.')
			point = true;
		i++;
	}	
	try {
		std::stof(input);
	} catch(const std::invalid_argument& e) {
		return (false);
	}
	return (true);
}

static bool	detectIfDouble(const std::string & input){

	if (input == "nan" || input == "-inf" || input == "+inf")
		return (true);
	if ((input[0] != '-' && !ft_isdigit(input[0])))
		return (false);
	int i=0;
	bool point = false;
	if (input[0] == '-')
		i++;
	while(i < ft_strlen(input)){
		if (!ft_isdigit(input[i]) && input[i] != '.')
			return (false);
		if (input[i] == '.' && point)
			return (false);
		else if (input[i] == '.')
			point = true;
		i++;
	}	
	try {
		std::stod(input);
	} catch(const std::invalid_argument& e) {
		return (false);
	}
	return (true);
}

static int checkType(const std::string & input){
	if (detectIfChar(input))
		return (0);
	if (detectIfInt(input))
		return (1);
	if(detectIfFloat(input))
		return (2);
	if(detectIfDouble(input))
		return (3);
	return (-1);
}

static void	printChar(const std::string & input, int type){
	
	std::cout << "char: ";
	if (type == -1){
		std::cout << "Impossible" << std::endl;
		return ;
	}
	if (type == 0){
		std::cout << input << std::endl;
		return ;
	}	
	try {
		int nbint = std::stoi(input);
		if (nbint < 32 || nbint > 126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "\'" << static_cast<char>(nbint) << "\'" << std::endl;	
	} catch(const std::invalid_argument& e) {
		std::cout << "Impossible" << std::endl;
	}
}

static void	printInt(const std::string & input, int type){
	
	std::cout << "int: ";
	if (type == -1){
		std::cout << "Impossible" << std::endl;
		return ;
	}
	try {
		int nbint = std::stoi(input);
		int castInt = static_cast<int>(nbint); 
		std::cout << castInt << std::endl;;
	} catch(const std::invalid_argument& e) {
		std::cout << "Impossible" << std::endl;
	}
}

static void	printFloat(const std::string & input, int type){
	
	std::cout << "float: ";
	if (type == -1){
		std::cout << "Impossible" << std::endl;
		return ;
	}
	try {
		float nbFloat = std::stof(input);
		if (type == 1 || (nbFloat - static_cast<int>(nbFloat) == 0)){
			std::cout << static_cast<float>(nbFloat) << ".0f" << std::endl;
		}
		else
			std::cout << static_cast<float>(nbFloat) << "f" << std::endl;
	} catch(const std::invalid_argument& e) {
		std::cout << "Impossible" << std::endl;
	}
}

static void	printDouble(const std::string & input, int type){
	
	std::cout << "double: ";
	if (type == -1){
		std::cout << "Impossible" << std::endl;
		return ;
	}
	if (input == "+inff" || input == "+inf")
		std::cout << "inf" << std::endl;
	else if (input == "nanf" || input == "nan" )
			std::cout << "nan" << std::endl;
	else if (input == "-inff" || input == "-inf")
		std::cout << "-inf"<< std::endl;
	else {
		try {
			double nbDouble = std::stod(input);
			if (type == 1 || (nbDouble - static_cast<int>(nbDouble) == 0))
				std::cout << static_cast<double>(nbDouble) << ".0" << std::endl;
			else
				std::cout << static_cast<double>(nbDouble) << std::endl;
		} catch(const std::invalid_argument& e) {
			std::cout << "Impossible" << std::endl;
		}
	}
}

void	ScalarConverter::convert(const std::string & input){
	
	int type = checkType(input);
	printChar(input, type);
	printInt(input, type);
	printFloat(input, type);
	printDouble(input, type);
}

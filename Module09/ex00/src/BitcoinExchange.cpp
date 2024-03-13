/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:30:07 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/13 18:05:35 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input) : _input(input) {
	createInputMap();
}

//copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange & src){
	*this = src;
}

BitcoinExchange::~BitcoinExchange(){
}

//operator "="
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & src) {
	if (this != &src){
		this->_input = src.getInput();
		this->_inputMap = src.getInputMap();
	}
	return (*this);
}

//getters
std::string	BitcoinExchange::getInput() const {
	return(this->_input);
}

std::map<std::string, int>	BitcoinExchange::getInputMap() const{
	return(this->_inputMap);
}

//functions

bool	isStringNum(std::string str){
	for (unsigned int i=0; i < str.length(); i++){
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}

void	lineParsing(std::string line){

	for (size_t indexHyphen = 0; indexHyphen < 3; indexHyphen++){
		size_t pos;
		if (indexHyphen < 2)
			pos = line.find("-");
		else
			pos = line.find(",");
		if (!pos)
			throw std::invalid_argument("invalid input.");
		
		std::string str = line.substr(0, pos);
		line = line.substr(++pos);

		std::cout << "str: " << str << std::endl;
		std::cout << "line: " << line << std::endl;
		std::cout << "index: " << indexHyphen << std::endl;
		if (indexHyphen == 0){
			if (str.size() != 4 || !isStringNum(str))
				throw std::invalid_argument("invalid input.");
		} else {
			if (str.size() != 2 || !isStringNum(str))
				throw std::invalid_argument("invalid input.");
		}
		if (indexHyphen == 2){
			if (!isStringNum(line))
				throw std::invalid_argument("invalid input.");
		}
		std::cout << std::endl;	
	}
	
	
}



void	BitcoinExchange::createInputMap(){
	std::ifstream input(this->_input);
	if (!input.is_open())
		throw std::invalid_argument("could not open file.");

	std::string	line;
    int index = 0;
	while (std::getline(input, line)){
		if (index > 0){
			lineParsing(line);
			
			//_inputMap.insert(std::make_pair(line.substr(0, line.find(",")), std::stoi(line.substr(++posComma))));
		}
		index++;
	}
}

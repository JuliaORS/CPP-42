/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:20:03 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/25 12:48:33 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstring>

BitcoinExchange::BitcoinExchange(std::string input, std::map<std::string, double> \
	databaseMap) :  _database(databaseMap), _input(input) {
	showBtcValue();
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
		this->_database = src.getDatabaseMap();
	}
	return (*this);
}

//getters
std::string	BitcoinExchange::getInput() const {
	return(this->_input);
}

std::map<std::string, double>	BitcoinExchange::getDatabaseMap() const{
	return(this->_database);
}

//utils
bool	isStringInt(std::string str){
	
	for (unsigned int i=0; i < str.length(); i++){
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}

bool	isStringDouble(std::string str){
	bool point = false;
	for (unsigned int i=0; i < str.length(); i++){
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			return (false);
		else if (str[i] == '.'){
			if (!point)
				point = true;
			else
				return (false);
		}	
	}
	return (true);
}

std::string	removeSpacesStartEnd(std::string line){
	size_t first = line.find_first_not_of(' ');
	if (first == std::string::npos)
		return "";
	size_t last = line.find_last_not_of(' ');
    return line.substr(first, (last - first + 1));
}

void checkExistingDate(int year, int month, int day){
	if (month < 1 ||  month > 12 || day < 1 || day > 31)
		throw std::out_of_range("invalid date.");
	if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11))
		throw std::out_of_range("invalid date.");
	if (month == 2 && day > 28){
		if (day > 29)
			throw std::out_of_range("invalid date.");
		if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
			throw std::out_of_range("invalid date.");
	}
}

//functions
std::string	getDate(std::string input){

	std::string line = removeSpacesStartEnd(input);
	if (line.size() < 14)
		throw std::out_of_range("bad input.");
	std::string year = line.substr(0, 4);
	std::string month = line.substr(5, 2);
	std::string day = line.substr(8, 2);
	if (!isStringInt(year) || !isStringInt(month) || !isStringInt(day) || \
		line[4] != '-' || line[7] != '-')
		throw std::invalid_argument("bad input => " + input);
	line = removeSpacesStartEnd(line.substr(10));
	if (line[0] !=  '|')
		throw std::invalid_argument("bad input => " + input);
	checkExistingDate(std::stoi(year), std::stoi(month), std::stoi(day));
	std::string date = year + "-" + month + "-" + day;
	return (date);
}

double	getQuantity(std::string input){
	size_t bar = input.find("|");
	std::string line = removeSpacesStartEnd(input.substr(++bar));
	double quantity = std::stod(line);
	if (quantity < 0)
		throw std::out_of_range("not a positive number.");
	if (quantity > 1000)
		throw std::out_of_range("too large number.");
	if (!isStringDouble(line))
		throw std::invalid_argument("bad input => " + input);
	return (quantity);
}

void	BitcoinExchange::searchInDatabaseMap(std::string date, double quantity){
	std::map<std::string, double>::iterator it = _database.find(date);
	if (it == _database.end()){
		if (std::strcmp(date.c_str(), _database.begin()->first.c_str()) < 0){
			throw std::out_of_range("invalid date, too old.");
		} 
		else {
			for (it=this->_database.begin(); it != _database.end(); ++it){
				if (std::strcmp(it->first.c_str(), date.c_str()) > 0){
					--it;
					break ;
				}
			}
			if (it == _database.end())
				--it;
		}
	}
	std::cout << date << " => " << quantity << " = " << quantity*it->second \
		<< std::endl;
}

void	BitcoinExchange::showBtcValue(){

	std::ifstream input(this->_input);
	if (!input.is_open())
		throw std::invalid_argument("could not open file.");
	
	std::string	line;
    int index = 0;
	while (std::getline(input, line)){
		if (index > 0){
			try{
				std::string date = getDate(line);
				double quantity = getQuantity(line);
				searchInDatabaseMap(date, quantity);
			} catch (std::invalid_argument e){
				std::cout << "Error: " << e.what() << std:: endl;
			} catch (const std::out_of_range& e) {
        		std::cout << "Error: " << e.what() << std:: endl;
   			}
		}
		index++;
	}
	input.close(); 
}

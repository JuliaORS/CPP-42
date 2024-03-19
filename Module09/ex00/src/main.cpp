/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:11:52 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 12:11:52 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp" 

std::map<std::string, double> saveDatabaseMap(){
	
	std::ifstream database("data.csv");
	if (!database.is_open())
		throw std::invalid_argument("could not open file.");

	std::map<std::string, double> databaseMap;
	std::string	line;
    int index = 0;
	while (std::getline(database, line)){
		if (index > 0){
			size_t posComma = line.find(",");
			databaseMap.insert(std::make_pair(line.substr(0, line.find(",")), \
				std::stod(line.substr(++posComma))));
		}
		index++;
	}
	return databaseMap; 
}

int main(int ac, char **av) {

	try{
		if (ac != 2)
			throw std::invalid_argument("could not open file.");
		std::map<std::string, double> databaseMap = saveDatabaseMap();
		BitcoinExchange bitcoinExchange(av[1], databaseMap);
	}
	catch (std::invalid_argument e){
		std::cout << "Error: " << e.what() << std:: endl;
	}
	return (0);
}

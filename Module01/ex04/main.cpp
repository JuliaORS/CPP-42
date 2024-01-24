/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:47:27 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 19:47:27 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

std::string newStr(std::string line, char *arv2, char *arv3){

	int 		pos = 0;
	std::string	newStr;
	std::string	firstString;
	std::string av2 = arv2;
	std::string av3 = arv3;

	pos = (line.find(av2));
	if (pos >= 0){
		while (pos >= 0){
			std::string firstString = line.substr(0, pos);
			newStr += firstString + av3;
			line = line.substr(pos + av2.length());
			pos = line.find(av2);
		}
	}
	newStr = newStr + line;
	return (newStr);
}

int main(int ac, char **av){
	if (ac == 4) {
		std::ifstream infile(av[1]);
  		if (!infile.is_open()){
			std::cout << "Invalid file" << std::endl;
			return (1);
		}
	
		std::string newFileName = std::string(av[1]) + ".replace";

		std::ofstream newFile(newFileName.c_str());
		if (!newFile.is_open()){
			std::cout << "New file has an error" << std::endl;
			return (1);
		}

		std::string	line;
		while (std::getline(infile, line)){
			std::string addStr = newStr(line, av[2], av[3]);
			newFile << addStr << std::endl;
		}
	}
	else{
		std::cout << "Invalid parameters. We need 3 inputs: file, string1 and string2" << std::endl;
		return (1);
	}
	return (0);
}

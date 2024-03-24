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

#include "PmergeMe.hpp"
#include <algorithm>

bool	isStringDigit(const std::string str){
	for(int i=0; i < str.length(); i++){
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

std::vector<int>	saveInput(int ac, char **av){
	std::vector<int> vect;
	for (int i=1; i < ac; i++){
		if (!isStringDigit(av[i]))
			throw std::invalid_argument("");
		int nb = std::stoi(av[i]);
		vect.push_back(nb);
	}
	if (vect.size() < 2)
		throw std::invalid_argument("");
	return (vect);
}

int main(int ac, char **av) {
	try{
		if (ac < 2)
			throw std::invalid_argument("");
		std::vector<int> input= saveInput(ac, av);
		PmergeMe pmergeMe(input);
		pmergeMe.sortVector();
		pmergeMe.sortList();
	}
	catch (std::invalid_argument e){
		std::cout << "Error: invalid arguments." << std:: endl;
	} catch (const std::out_of_range& e) {
            std::cerr << "Error: arguments out of range." << std::endl;
    }
	return (0);
}

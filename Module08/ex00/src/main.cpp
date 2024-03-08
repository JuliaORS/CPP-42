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

#include "easyfind.hpp" 
#include <array>
#include <vector>

void	arrayTest(){
	/*const int	ARRAY_SIZE = 6;
	std::array<int, ARRAY_SIZE> arr = {0, 1, 2, 3, 4, 5};

	std::cout << std::endl << "----- existing number ----- " << std::endl;
	try{
		std::array<int, ARRAY_SIZE>::iterator it = easyfind(arr, 3);
		std::cout << "Number " << *it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}*/

	/*std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		std::iterator it = easyfind(arr, 17);
		std::cout << "Number " << it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}

	std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		std::iterator it = easyfind(arr, -347437374);
		std::cout << "Number " << it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}*/
}

void	vectorTest(){

	std::vector<int> vector;
	vector.push_back(1);
	vector.push_back(4);
	vector.push_back(6);
	vector.push_back(64);
	vector.push_back(-123);

	std::cout << std::endl << "----- existing number ----- " << std::endl;
	try{
		std::vector<int>::iterator it  = easyfind(vector, 3);
		std::cout << "Number " << it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}
/*
	std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		std::iterator it  = easyfind(vector, 17);
		std::cout << "Number " << it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}

	std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		std::iterator it  = easyfind(vector, -347437374);
		std::cout << "Number " << it << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}*/
}


int main() {

	arrayTest();
	//vectorTest();

	return (0);
}

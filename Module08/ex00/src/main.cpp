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

int main() {

	const int	ARRAY_SIZE = 6;
	std::array<int, ARRAY_SIZE> arr = {0, 1, 2, 3, 4, 5};

	std::cout << std::endl << "----- existing number ----- " << std::endl;
	try{
		int i = easyfind(arr, 3);
		std::cout << "Number " << i << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}

	std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		int i = easyfind(arr, 17);
		std::cout << "Number " << i << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}

	std::cout << std::endl << "----- not existing number ----- " << std::endl;
	try{
		int i = easyfind(arr, -347437374);
		std::cout << "Number " << i << std:: endl;
	}
	catch (std::exception e) {
		std::cout << RED << "Not found" << RESET << std:: endl;
	}

	return (0);
}

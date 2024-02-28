/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:17:39 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 11:17:39 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp" 

int main(int ac, char **av) {

	try {
		if (ac != 2)
			throw std::invalid_argument("");
		ScalarConverter::convert(av[1]);
	}
	catch(std::exception &e) {
		std::cout << e.what() << "Invalid arguments" << std::endl;
	}	
	return (0);
}

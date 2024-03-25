/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:20:28 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/20 15:20:30 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp" 

int main(int ac, char **av) {
	try{
		if (ac != 2)
			throw std::invalid_argument("invalid arguments.");
		RPN RPN(av[1]);
	}
	catch (std::invalid_argument e){
		std::cout << "Error: " << e.what() << std:: endl;
	}
	return (0);
}

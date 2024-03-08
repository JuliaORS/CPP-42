/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:11:52 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/08 14:44:29 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp" 

void mandatoryTest(){
	Span sp = Span(5);
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;	
	}
	catch(std::exception e){
		std::cout << RED << "" << RESET << std:: endl;
	}
}

void myOwnTest(){
	Span sp = Span(10);
	sp.addNumber(-6);
	sp.addNumber(3);
	sp.addNumber(-17);
	sp.addNumber(-9);
	sp.addNumber(11);
	std::cout << std:: endl << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;	
}

void errorTest(){
	Span sp = Span(10);
	sp.addNumber(-6);
	sp.addNumber(3);
	sp.addNumber(-17);
	sp.addNumber(-9);
	sp.addNumber(11);
	std::cout << std:: endl << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;	
}


int main() {

	mandatoryTest();
	myOwnTest();
	errorTest();
	return (0);
}

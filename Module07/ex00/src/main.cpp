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

#include "whatever.hpp" 

int main() {

	int a = 2;
	int b = 3; 

	::swap(a,b); 
	std::cout << "a = " << a << ", b = " << b << std::endl; 
	std::cout << "min(a,b) = " << ::min(a,b) << std::endl; 
	std::cout << "max(a,b) = " << ::max(a,b) << std::endl;

	std::string c="chaine1";
	std::string d="chaine2";

	::swap(c,d); 
	std::cout<<"c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c,d) = " << ::min(c,d) << std::endl; 
	std::cout << "max(c,d) = " << ::max(c,d) << std::endl;

	return (0);
}

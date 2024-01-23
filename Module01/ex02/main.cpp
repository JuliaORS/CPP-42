/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:42 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:48:42 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{
	std::string str= "HI THIS IS BRAIN";

	std::string *stringPTR = &str;

	std::string &stringREF = str;
	
	std::cout << "memory adress of string variable: " << &str << std::endl;
	std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF: " << &stringREF << std::endl<<std::endl;

	std::cout << "value of string variable: " << str << std::endl;
	std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}

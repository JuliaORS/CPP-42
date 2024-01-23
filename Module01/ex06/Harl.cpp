/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:49:49 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:49:51 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp" 

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::complain(std::string level){

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "EXTRA"};
	int i;
	for(i=0; i < 4; i++){
		if (!levels[i].compare(level))
			break;
	}
	switch (i){
		case 0:
			this->Harl::_debug();
		case 1:
			this->Harl::_info();
		case 2:
			this->Harl::_warning();
		case 3:
			this->Harl::_error();
			break;
		default:
			std::cout << "Level is not correct (DEBUG, INFO, WARNING or EXTRA)." << std::endl;
	}
}	

void	Harl::_debug(){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::_info(){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started";
	std::cout << " working here since last month." << std::endl;
}

void	Harl::_error(){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

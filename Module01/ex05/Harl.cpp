/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:49:35 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:49:36 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp" 

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::complain(std::string level){

	if (level.size() == 1 && level[0] >= '1' && level[0] <= '4') {
		
		void (Harl::*f[4])();
		f[0] = &Harl::_debug;
		f[1] = &Harl::_info;
		f[2] = &Harl::_warning;
		f[3] = &Harl::_error;

		for (int i = 0; i < 4; i++){
			if (i == level[0] - 49)
				(this->*f[i])();
		}
	}
	else
		std::cout << "Level is not correct (1 to 4)." << std::endl;
}

void	Harl::_debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::_info(){
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(){
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started";
	std::cout << " working here since last month." << std::endl;
}

void	Harl::_error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

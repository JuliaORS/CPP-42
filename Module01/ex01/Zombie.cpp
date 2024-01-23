/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:27 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:48:27 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << this->_name << " has been destroyed" << std::endl;
}

Zombie::Zombie(std::string name){
	this->_name = name;
}

void	Zombie::setName(std::string name){
	this->_name = name;
}

void Zombie::announce(){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

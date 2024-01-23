/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:52 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:48:54 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp" 

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weaponA(weapon){
}

HumanA::~HumanA(){
}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with their " << _weaponA.getType() << std::endl;
}

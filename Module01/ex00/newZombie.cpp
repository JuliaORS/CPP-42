/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:47:42 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:47:42 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie* newZombie(std::string name)
{
	Zombie *newZ;
	newZ = new Zombie(name);

	return (newZ);
}

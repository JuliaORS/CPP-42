/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:34 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:48:36 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie*	zombieHorde(int N, std::string name){
	Zombie *newZom = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		newZom[i].setName(name);
	}
	return (newZom);
}

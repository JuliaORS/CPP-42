/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:49:55 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:49:55 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp" 

int main(int ac, char **av)
{
	Harl harl;

	if (ac == 2){
		harl.complain(av[1]);

	}
	else
		std::cout << "Enter a correct order: DEBUG, INFO, WARNING or ERROR" << std::endl;
	return (0);
}

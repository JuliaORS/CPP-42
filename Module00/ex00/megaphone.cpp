/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:57:41 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/22 18:51:20 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main (int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; av[i]; i++)
		{
			for(size_t j = 0; av[i][j]; j++){
				av[i][j] = std::toupper(av[i][j]);
				std::cout << av[i][j];
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

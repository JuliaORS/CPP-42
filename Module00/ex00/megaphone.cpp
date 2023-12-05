/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:57:41 by julolle-          #+#    #+#             */
/*   Updated: 2023/11/16 10:57:42 by julolle-         ###   ########.fr       */
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
			for(size_t j = 0; av[i][j]; j++)
				av[i][j] = std::toupper(av[i][j]);
			std::string word(av[i]);
			std::cout << word << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

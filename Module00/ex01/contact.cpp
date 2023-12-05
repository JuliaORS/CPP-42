/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:39:39 by julolle-          #+#    #+#             */
/*   Updated: 2023/11/16 15:43:29 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_contact(Contact *contact)
{
	std::cout << "First name: ";
	std::getline(std::cin, contact.first_name);
	std::cout << endl;
}

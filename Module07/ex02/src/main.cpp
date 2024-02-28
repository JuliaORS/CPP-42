/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:15:06 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 15:15:06 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp" 

int main() {

	int arr[6] = {5, 3, -4, 1, 546, 89};
	::iter(arr, 6, &print);
	
	std::string str[4]= {"hi", "hola", "hallo", "hey"};
	::iter(str, 4, &print);
	return (0);
}

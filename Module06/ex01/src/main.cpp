/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:29:43 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 11:29:43 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp" 

int main() {

	Data* data = new Data;
	data->i = 16;
	data->info = "hola";

	uintptr_t serial = Serializer::serialize(data);
	std::cout << "Data pointer: " << data << " | int: " << data->i << \
		" | info: " << data->info << std::endl;
	Data *newData = Serializer::deserialize(serial);
	std::cout << "Data pointer: " << newData << " | int: " << newData->i << \
		" | info: " << newData->info << std::endl;

	delete data;
	
	return (0);
}

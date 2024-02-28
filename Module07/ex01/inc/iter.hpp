/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:12:17 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 15:12:17 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP 
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T* array, unsigned int len, void (*f)(T)) {
	
	if (array){
		for (unsigned int i=0; i < len; i++){
			f(array[i]);
		}
	} 
}

template <typename T>
void	print(const T elem){
	std::cout << elem << std::endl;
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:14:52 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 15:14:52 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP 
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
	public:
    	Array();
        Array(int n);
};

template<>
class Array<int> {
public:
    void print() {
        std::cout << "Specialized version for int" << std::endl;
    }
};

#endif

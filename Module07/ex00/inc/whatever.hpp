/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:09:54 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 15:09:54 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP 
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T min(const T& a, const T& b) {
	return (a < b ? a : b);
}

template <typename T>
const T max(const T& a, const T& b) {
	return (a > b ? a : b);
}

#endif

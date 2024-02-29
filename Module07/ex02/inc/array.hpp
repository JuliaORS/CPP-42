/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:14:40 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 12:14:40 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP 
# define ARRAY_HPP

# include <iostream>
# define  CYAN "\033[36m"
# define RESET "\033[0m"
# define RED "\033[31m"

template <class T>
class Array {
	
	public:
		Array();
		Array(unsigned int n);
		Array(const Array & src);
		~Array();

		Array &	operator=(const Array & src);
		T & 	operator[](unsigned int n);

		unsigned int	size() const;

	private:
		T*				_arr;
		unsigned int	_n;
};

#endif

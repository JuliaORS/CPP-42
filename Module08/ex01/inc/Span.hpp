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

#ifndef SPAN_HPP 
# define SPAN_HPP

# include <iostream>
# include <array>

class Span {
	
	public:
		Span(unsigned int n);
		Span(const Span & src);
		~Span();

		Span&	operator=(const Span & src);

		unsigned int	addNumber(int nb);
		shortestSpan();
		longestSpan();

	private:
		std::multiset<int>	_arr;
		unsigned int		_size;
};

#endif

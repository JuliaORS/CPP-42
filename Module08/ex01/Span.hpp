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
# include <set>

class Span {
	
	public:
		Span(unsigned int n);
		Span(const Span & src);
		~Span();

		Span&	operator=(const Span & src);

		std::multiset<int>	getSpan() const;
		unsigned int		getSize() const;

		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();

	private:
		std::multiset<int>	_span;
		unsigned int		_size;
};

#endif

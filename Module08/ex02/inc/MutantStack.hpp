/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:14:40 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/11 20:03:06 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP 
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

# define RESET "\033[0m"
# define RED "\033[31m"

template<typename T>
class MutantStack : public std::stack<T>{
	
	public:
		MutantStack();
		MutantStack(const MutantStack & src);
		~MutantStack();

		MutantStack&	operator=(const MutantStack & src);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin();
		iterator	end();
};

#endif

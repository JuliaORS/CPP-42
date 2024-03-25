/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:20:20 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/20 15:20:22 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP 
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN {
	
	public:
		RPN(std::string input);
		RPN(const RPN & src);
		~RPN();
		RPN & operator=(const RPN & src);

		std::stack<double>	getStack() const;

		void	operateStack(std::string input);
	
	private:
		std::stack<double>	_st;
};

#endif
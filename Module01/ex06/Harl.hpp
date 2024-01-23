/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:49:52 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:49:54 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP 
# define HARL_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class Harl{
	
	public: 
		Harl();
		~Harl();

		void	complain(std::string level);

	private:
		void _debug();
		void _info();
		void _warning();
		void _error();

};

#endif

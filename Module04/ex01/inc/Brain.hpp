/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:15 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/02 13:54:33 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP 
# define BRAIN_HPP

# include <iostream>

class Brain{

	public:
		Brain();
		Brain(const Brain & src);
		~Brain();

		Brain & operator=(const Brain & src);

		std::string	getIdea() const;
		void		setIdea(const std::string & idea);
		void		printIdeas();

	private:
		std::string _ideas[100];
		int			_index;

};

#endif

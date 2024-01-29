/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:54:15 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/29 20:09:10 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP 
# define BRAIN_HPP

class Brain{
	
	public:
		Animal();
		Animal(const std::string & type);
		Animal(const Animal & src);
		virtual ~Animal();

		Animal & operator=(const Animal & src);

		std::string getType() const;
		void		setType(const std::string & type);
		
		virtual void makeSound();
		virtual void makeSound() const;

	private:
		std::string _type;

};

#endif

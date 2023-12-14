/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:00:16 by julolle-          #+#    #+#             */
/*   Updated: 2023/12/14 11:39:21 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

class phoneBook{
	
	public:
		phoneBook();
		~phoneBook();

		void	add_contact();
		//void	search_contact();

	private:
		Contact	_contact[8];	
};

#endif

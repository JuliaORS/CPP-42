/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:00:16 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/22 20:27:57 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
	
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact();
		void	show_contacts();
		int		save_contact(int nB);


	private:
		Contact	_contact[8];
		int		_lastIx;
		int		_size;
};

#endif

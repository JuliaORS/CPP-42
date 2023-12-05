/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:00:16 by julolle-          #+#    #+#             */
/*   Updated: 2023/11/16 15:37:47 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP 
# define PHONEBOOK_HPP

class phoneBook {
	
	public:
		phoneBook();
		~phoneBook();
		void	add_contact(Contact *contact);
		void	search_contact(Contact *contact);

	private:
		//Contact 

};

#endif


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:57:36 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/22 20:18:02 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP 
# define CONTACT_HPP
# include <iostream>
# include <cstring>
# include <iomanip>

class Contact {
	
	public:
		Contact();
		~Contact();
		
		void			setFirstName (std::string str);
		void			setLastName (std::string str);
		void			setNickname (std::string str);
		void			setPhonenumber (std::string str);
		void			setDarkestSecret (std::string str);

		static void		setNb (int n);
		static int		getNb ();

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getPhonenumber();
		std::string	getDarkestSecret();

	private:
		std::string _first_name;;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		static int 	_nContact;
};

#endif

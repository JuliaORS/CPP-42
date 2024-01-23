/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:57:36 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:24:27 by julolle-         ###   ########.fr       */
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
		std::string _firstName;;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		static int 	_nContact;
};

#endif

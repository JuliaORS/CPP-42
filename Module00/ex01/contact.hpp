/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:57:36 by julolle-          #+#    #+#             */
/*   Updated: 2023/12/14 11:45:49 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP 
# define CONTACT_HPP
# include <iostream>
# include <cstring>

class Contact {
	
	public:
		//Default constructor
		Contact();
		//Destructor		
		~Contact();
		
		void			setFirstName (std::string str);
		void			setLastName (std::string str);
		void			setNickname (std::string str);
		void			setPhonenumber (std::string str);
		void			setDarkestSecret (std::string str);
		static void		setNb (int n);
		static int		getNb ();
		int				getIndex () const;
	
		std::string	getFirstName () const;
		std::string	getLastName () const;
		std::string	getNickname () const;
		std::string	getPhonenumber () const;
		std::string	getDarkestSecret () const;

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		std::string _num_contact;
};

#endif

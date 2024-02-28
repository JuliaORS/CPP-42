/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:29:32 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 11:29:32 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP 
# define SERIALIZER_HPP

# include <iostream>
# include "Data.hpp"

class Serializer{
	
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer(const Serializer & src);
		~Serializer();
		Serializer & operator=(const Serializer & src);
};

#endif

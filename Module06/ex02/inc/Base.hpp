/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:34:48 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 11:34:48 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP 
# define BASE_HPP

# include <iostream>

class Base{
	public:
		virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif

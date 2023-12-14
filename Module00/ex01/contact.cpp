/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:39:39 by julolle-          #+#    #+#             */
/*   Updated: 2023/12/11 16:49:34 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp" 

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::getFirstName() const {
    return _first_name;
}

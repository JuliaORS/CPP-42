/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:49:20 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:49:20 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP 
# define WEAPON_HPP
# include <cstring>
# include <iomanip>
# include <iostream>

class Weapon{
    
    public: 
        Weapon();
        ~Weapon();

        Weapon(std::string type);

        std::string getType();
        void        setType(std::string type);

    private:
        std::string _type;
};

#endif
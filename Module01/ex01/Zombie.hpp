/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:30 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/23 15:48:30 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP 
# define ZOMBIE_HPP
# include <iostream>
# include <cstring>
# include <iomanip>

class Zombie{
    
    public: 
        Zombie();
        ~Zombie();

        Zombie(std::string name);

        void	setName (std::string name);
        void    announce();

    private:
        std::string _name;
};

    Zombie*    zombieHorde(int N, std::string name);

#endif

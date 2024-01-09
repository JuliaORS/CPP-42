
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

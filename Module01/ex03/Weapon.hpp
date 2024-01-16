
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
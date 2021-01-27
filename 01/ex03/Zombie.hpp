#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <chrono>
# include <string>
# include <random>
#include <ctime>
#include <ratio>

class Zombie
{
    public:
        Zombie(std::string name, std::string type);
        Zombie();

        void advert();

    private:
        std::string     m_name;
        std::string     m_type;
};

#endif
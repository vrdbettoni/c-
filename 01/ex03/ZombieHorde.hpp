#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"
# include <iostream>
# include <string>
# include <chrono>
# include <string>
# include <random>
#include <ctime>

class ZombieHorde
{
    public:
        ZombieHorde(int n);
        void announce();
        ~ZombieHorde();

    private:
        Zombie *Zomb;
        int     nb;
};

#endif

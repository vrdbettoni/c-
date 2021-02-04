#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int     main()
{
    srand(time(NULL));
    ZombieHorde zh = ZombieHorde(4);
    zh.announce();
    return (0);
}
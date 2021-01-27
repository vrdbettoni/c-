#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : nb(n)
{
    Zomb = new Zombie[nb];
    std::string name[10] = {"Qweqwe", "Pouts", "Karly", "Boju", "Truci", "Rapf", "Asiu", "Mich", "Joug", "Zexe"};
    for (int i = 0; i < nb; i++)
        Zomb[i] = Zombie(name[rand()%10], "a zombie in the horde");
}

ZombieHorde::~ZombieHorde()
{
        delete[] Zomb;
}

void    ZombieHorde::announce()
{
    for (int i = 0; i < nb; i++)
        Zomb[i].advert();
}
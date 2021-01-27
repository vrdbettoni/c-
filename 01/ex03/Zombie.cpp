#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

Zombie::Zombie(){}

void    Zombie::advert()
{
    std::cout << "<" << this->m_name << " (" << this->m_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}
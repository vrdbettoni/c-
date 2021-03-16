#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Bobby")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is Bobby" << std::endl;
    _name = "Bobby";
    _type = "FRAGTRAP";
    setStats(100, 100, 100, 100, 1, 30, 20, 5);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _type = "FRAGTRAP";
    std::cout << "FragTrap " << _name << " created" << std::endl;
    setStats(100, 100, 100, 100, 1, 30, 20, 5);
}

FragTrap::~FragTrap()
{
    std::cout << _name << " deleted" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    std::cout << "Assignement operator called" << std::endl;
    ClapTrap::operator=(other);
    return (*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    std::cout << _type << " " << _name;
    std::string attack[5] = {" with an m&m's", " with an egg", " with nothing", " with a knife", " with a saber"};
    if (_energyPoints >= 25){
        std::cout << " attack " << target << attack[(rand()%50) / 10] << std::endl;
        _energyPoints -= 25;
    }
    else
        std::cout << "not enough energy points" << std::endl;
}

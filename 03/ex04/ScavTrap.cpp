#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Serena")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is serena" << std::endl;
    _name = "Serena";
    _type = "SCAVTRAP";
    setStats(100, 100, 50, 50, 1, 20, 15, 3);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _type = "SCAVTRAP";
    std::cout << "ScavTrap " << _name << " created" << std::endl;
    setStats(100, 100, 50, 50, 1, 20, 15, 3);
}

ScavTrap::~ScavTrap(){std::cout << _name << " deleted" << std::endl;}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "Assignement operator called" << std::endl;
    ClapTrap::operator=(other);
    return (*this);
}

void ScavTrap::challengeNewcomer()
{
    std::cout << _type << " " << _name;
    std::string challenge[5] = {" try to catch a hen", " run", " is swimming 10km", " try to fly", " can't do the challenge"};
    if (_energyPoints >= 25){
        std::cout << challenge[(rand()%50) / 10] << std::endl;
        _energyPoints -= 25;
    }
    else
        std::cout << "not enough energy points" << std::endl;
}

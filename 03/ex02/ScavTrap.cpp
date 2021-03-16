#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Serena")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is serena" << std::endl;
    _type = "SCAVTRAP";
    _name = "Serena";
    ScavTrap::setStats();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "SCAVTRAP " << _name << " created" << std::endl;
    _type = "SCAVTRAP";
    ScavTrap::setStats();
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " deleted" << std::endl;
}

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

void ScavTrap::setStats()
{
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 50;
    _maxEnergyPoints = 50;
    _level = 1;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorReduction = 3;
}

void ScavTrap::challengeNewcomer()
{
    std::string challenge[5] = {" try to catch a hen", " run", " is wimming 10km", " try to fly", " can't do the challenge"};
    if (_energyPoints >= 25){
        std::cout << _type << " " << _name << challenge[(rand()%50) / 10] << std::endl;
        _energyPoints -= 25;
    }
    else
        std::cout << _type << " " << _name << " have not enough energy points" << std::endl;
}

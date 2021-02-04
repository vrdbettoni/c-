#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : NinjaTrap("Jean"), FragTrap("Jean")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is Jean" << std::endl;
    _name = "Jean";
    setStats(FragTrap::_hitPoints, FragTrap::_maxHitPoints, NinjaTrap::_energyPoints, NinjaTrap::_maxEnergyPoints, 1, NinjaTrap::_meleeAttackDamage, FragTrap::_rangedAttackDamage, FragTrap::_armorReduction);
}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name), _name(name)
{
    std::cout << "SuperTrap " << _name << " created" << std::endl;
    setStats(100, 100, 120, 120, 1, 60, 20, 5);
}

SuperTrap::~SuperTrap()
{
    std::cout << _name << " deleted" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

SuperTrap& SuperTrap::operator=(const SuperTrap &other)
{
    std::cout << "Assignement operator called" << std::endl;
    ClapTrap::operator=(other);
    return (*this);
}
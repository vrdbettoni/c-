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
    setStats(FragTrap::_hitPoints, FragTrap::_maxHitPoints, NinjaTrap::_energyPoints, NinjaTrap::_maxEnergyPoints, 1, NinjaTrap::_meleeAttackDamage, FragTrap::_rangedAttackDamage, FragTrap::_armorReduction);
    std::cout << "HITPOINTS = " << _hitPoints << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << _name << " deleted" << std::endl;
}
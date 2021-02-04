#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "SCAV " << "Default constructor called" << std::endl;
    std::cout << "SCAV " << "His name is serena" << std::endl;
    _name = "Serena";
    ScavTrap::setStats();
}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
    std::cout << "SCAV " << "ScavTrap " << _name << " created" << std::endl;
    ScavTrap::setStats();
}

ScavTrap::~ScavTrap()
{
    std::cout << "SCAV " << _name << " deleted" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Assignement ScavTrap called" << std::endl;
    if (this != &other){
        _hitPoints = other._hitPoints;
        _maxHitPoints = other._maxHitPoints;
        _energyPoints = other._energyPoints;
        _maxEnergyPoints = other._maxEnergyPoints;
        _level = other._level;
        _meleeAttackDamage = other._meleeAttackDamage;
        _rangedAttackDamage = other._rangedAttackDamage;
        _armorReduction = other._armorReduction;
    }
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

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "SCAV " << _name << " attack " << target << " with a gun, for " << _rangedAttackDamage << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "SCAV " << _name << " attack " << target << " with her mind , for " << _meleeAttackDamage << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    long long _amount = amount;

    _amount -= _armorReduction;
    if (_amount > 0){
        if (_amount > _hitPoints)
            _amount = _hitPoints;
        _hitPoints -= _amount;
        std::cout << "SCAV " << _name << " loses " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
    }
    else
        std::cout << "SCAV " << _name << " is so strong" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    long long _amount = amount;

    if (_amount > _maxHitPoints - _hitPoints)
        _amount = _maxHitPoints - _hitPoints;
        _hitPoints += _amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
     std::cout << "SCAV " << _name << " gained " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    std::string challenge[5] = {" try to catch a hen", " run", " is wimming 10km", " try to fly", " can't do the challenge"};
    if (_energyPoints >= 25){
        std::cout << "SCAV " << _name << challenge[(rand()%50) / 10] << std::endl;
        _energyPoints -= 25;
    }
    else
        std::cout << "SCAV " << "not enough energy points" << std::endl;
}

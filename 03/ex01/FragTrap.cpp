#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FR4G-TP " << "Default constructor called" << std::endl;
    std::cout << "FR4G-TP " << "His name is Bobby" << std::endl;
    _name = "Bobby";
    FragTrap::setStats();
}

FragTrap::FragTrap(std::string name) : _name(name)
{
    std::cout << "FR4G-TP " << "FragTrap " << _name << " created" << std::endl;
    FragTrap::setStats();
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP " << _name << " deleted" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "Assignement FlagTrap called" << std::endl;
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

void FragTrap::setStats()
{
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _level = 1;
    _meleeAttackDamage = 30;
    _rangedAttackDamage = 20;
    _armorReduction = 5;
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << _name << " attack " << target << " with peebles, for " << _rangedAttackDamage << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << _name << " attack " << target << " with a shovel , for " << _meleeAttackDamage << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    long long _amount = amount;

    _amount -= _armorReduction;
    if (_amount > 0){
        if (_amount > _hitPoints)
            _amount = _hitPoints;
        _hitPoints -= _amount;
        std::cout << "FR4G-TP " << _name << " loses " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
    }
    else
        std::cout << "FR4G-TP " << _name << " is so strong" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    long long _amount = amount;

    if (_amount > _maxHitPoints - _hitPoints)
        _amount = _maxHitPoints - _hitPoints;
        _hitPoints += _amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
     std::cout << "FR4G-TP " << _name << " gained " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    std::string attack[5] = {" with an m&m's", " with an egg", " with nothing", " with a knife", " with a saber"};
    if (_energyPoints >= 25){
        std::cout << "FR4G-TP " << _name << " attack " << target << attack[(rand()%50) / 10] << std::endl;
        _energyPoints -= 25;
    }
    else
        std::cout << "FR4G-TP " << "not enough energy points" << std::endl;
}

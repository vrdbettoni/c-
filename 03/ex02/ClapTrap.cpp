#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << _name << " created (ClapTrap)" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << " deleted (ClapTrap)" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << _name << " attack " << target << " with a gun, for " << _rangedAttackDamage << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << _name << " attack " << target << " with her mind , for " << _meleeAttackDamage << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    long long _amount = amount;

    _amount -= _armorReduction;
    if (_amount > 0){
        if (_amount > _hitPoints)
            _amount = _hitPoints;
        _hitPoints -= _amount;
        std::cout << _name << " loses " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
    }
    else
        std::cout << _name << " is so strong" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    long long _amount = amount;

    if (_amount > _maxHitPoints - _hitPoints)
        _amount = _maxHitPoints - _hitPoints;
        _hitPoints += _amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
     std::cout << _name << " gained " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
}

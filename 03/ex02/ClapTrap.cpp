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

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Assignement ClapTrap called" << std::endl;
    if (this != &other){
        _type = other._type;
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

void ClapTrap::rangedAttack(std::string const &target)
{
    if (_type == "FRAGTRAP")
        std::cout << _type << " " << _name << " attack " << target << " with a gun, for " << _rangedAttackDamage << std::endl;
    if (_type == "SCAVTRAP")
        std::cout << _type << " " << _name << " attack " << target << " with a her mind, for " << _rangedAttackDamage << std::endl;

}

void ClapTrap::meleeAttack(std::string const &target)
{
    if (_type == "FRAGTRAP")
        std::cout << _type << " " << _name << " attack " << target << " with a peeble, for " << _meleeAttackDamage << std::endl;
    if (_type == "SCAVTRAP")
        std::cout << _type << " " << _name << " attack " << target << " with a knife , for " << _meleeAttackDamage << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    long long _amount = amount;

    _amount -= _armorReduction;
    if (_amount > 0){
        if (_amount > _hitPoints)
            _amount = _hitPoints;
        _hitPoints -= _amount;
        std::cout << _type << " " << _name << " loses " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
    }
    else
        std::cout << _type << " " << _name << " is so strong" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    long long _amount = amount;

    if (_amount > _maxHitPoints - _hitPoints)
        _amount = _maxHitPoints - _hitPoints;
        _hitPoints += _amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
     std::cout << _type << " " << _name << " gained " << _amount << " hit points (" << _hitPoints << " left)" << std::endl;
}

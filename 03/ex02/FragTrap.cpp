#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Bobby")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is Bobby" << std::endl;
    _name = "Bobby";
    FragTrap::setStats();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _name(name)
{
    std::cout << "FragTrap " << _name << " created" << std::endl;
    FragTrap::setStats();
}

FragTrap::~FragTrap()
{
    std::cout << _name << " deleted" << std::endl;
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

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    std::string attack[5] = {" with an m&m's", " with an egg", " with nothing", " with a knife", " with a saber"};
    if (_energyPoints >= 25){
        std::cout << _name << " attack " << target << attack[(rand()%50) / 10] << std::endl;
        _energyPoints -= 25;
    }
    else
        std::cout << "not enough energy points" << std::endl;
}

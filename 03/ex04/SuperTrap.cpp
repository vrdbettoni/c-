#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : NinjaTrap("Jean"), FragTrap("Jean")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is Jean" << std::endl;
    _type = "SUPERTRP";
    _name = "Jean";
    setStats(100, 100, 120, 120, 1, 60, 20, 5);
}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name)
{
    _name = name;
    _type = "SUPERTRP";
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
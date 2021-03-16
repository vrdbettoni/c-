#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("Albert")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is Albert" << std::endl;
    _name = "Albert";
    _type = "NINJATRP";
    setStats(60, 60, 120, 120, 1, 60, 5, 0);
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name), _name(name)
{
    _type = "NINJATRP";
    std::cout << "NinjaTrap " << _name << " created" << std::endl;
    setStats(60, 60, 120, 120, 1, 60, 5, 0);
}

NinjaTrap::~NinjaTrap(){std::cout << _name << " deleted" << std::endl;}

NinjaTrap::NinjaTrap(const NinjaTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap &other)
{
    std::cout << "Assignement operator called" << std::endl;
    ClapTrap::operator=(other);
    return (*this);
}

//Member Functions
void NinjaTrap::ninjaShoebox(ClapTrap &at){std::cout << _type << " " << _name << " hit you but you can't see him, " << at.getName() << std::endl;}
void NinjaTrap::ninjaShoebox(ScavTrap &at){std::cout << _type << " " << _name << " throw a shuriken on " << at.getName() << std::endl;}
void NinjaTrap::ninjaShoebox(FragTrap &at){std::cout << _type << " " << _name << " disappear in front of " << at.getName() << std::endl;}
void NinjaTrap::ninjaShoebox(NinjaTrap &at){std::cout << _type << " " << _name << " has no more idea" << at.getName() << std::endl;}
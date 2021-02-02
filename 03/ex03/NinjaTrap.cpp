#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("Albert")
{
    std::cout << "Default constructor called" << std::endl;
    std::cout << "His name is Albert" << std::endl;
    _name = "Albert";
    setStats(60, 60, 120, 120, 1, 60, 5, 0);
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name), _name(name)
{
    std::cout << "NinjaTrap " << _name << " created" << std::endl;
}

NinjaTrap::~NinjaTrap(){std::cout << _name << " deleted" << std::endl;}

//Member Functions
void NinjaTrap::ninjaShoebox(ClapTrap &at){std::cout << _name << " hit you but you can't see him, " << at.getName() << std::endl;}
void NinjaTrap::ninjaShoebox(ScavTrap &at){std::cout << _name << " throw a shuriken on " << at.getName() << std::endl;}
void NinjaTrap::ninjaShoebox(FragTrap &at){std::cout << _name << " disappear in front of " << at.getName() << std::endl;}
void NinjaTrap::ninjaShoebox(NinjaTrap &at){std::cout << _name << " has no more idea, " << at.getName() << std::endl;}
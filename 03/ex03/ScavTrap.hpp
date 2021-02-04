#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
    
        ScavTrap(const ScavTrap&);
        ScavTrap& operator=(const ScavTrap&);
        
        void challengeNewcomer(void);

    private:
        std::string _name;
};

#endif
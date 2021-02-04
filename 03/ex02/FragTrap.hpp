#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        FragTrap(const FragTrap&);
        FragTrap& operator=(const FragTrap&);

        void vaulthunter_dot_exe(std::string const &target);

    private:
        std::string _name;
        void setStats();
};

#endif
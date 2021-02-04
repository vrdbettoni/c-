#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap();
        NinjaTrap(std::string name);
        ~NinjaTrap();

        NinjaTrap(const NinjaTrap&);
        NinjaTrap& operator=(const NinjaTrap&);

        void ninjaShoebox(NinjaTrap &at);
        void ninjaShoebox(ClapTrap &at);
        void ninjaShoebox(FragTrap &at);
        void ninjaShoebox(ScavTrap &at);

        private:
            std::string _name;
};

#endif
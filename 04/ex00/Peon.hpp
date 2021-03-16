#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(std::string name);
        Peon(Peon const &);
        Peon& operator=(Peon const &);
        virtual ~Peon();

        void getPolymorphed() const;

    private:
        Peon();
        std::string     _name;
};

#endif

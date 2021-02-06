#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(AssaultTerminator const &);
        AssaultTerminator& operator=(AssaultTerminator const &);
        ~AssaultTerminator();

        AssaultTerminator* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif
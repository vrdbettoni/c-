#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    public:
        Character(std::string const & name);
        Character(const Character&);
        Character& operator=(const Character&);
        ~Character();

        std::string const   getName() const;
        void                recoverAP();
        void                equip(AWeapon*);
        void                attack(Enemy*);
        int                 getAp() const;
        AWeapon*            getWeapon() const;

    private:
        Character();
        std::string     _name;
        int             _ap;
        AWeapon*        _weapon;
        Enemy*          _enemy;
};

std::ostream& operator<<(std::ostream &flux, Character const& character);

#endif
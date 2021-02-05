#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
    public:
        AWeapon(std::string const &name, int apcost, int damage);
        AWeapon(const AWeapon&);
        AWeapon& operator=(const AWeapon&);
        virtual ~AWeapon();

        std::string  getName() const;
        int          getAPCost() const;
        int          getDamage() const;
        virtual void attack() const = 0;
        
    protected:
        AWeapon();
        std::string     _name;
        int             _damage;
        int             _apCost;

};

#endif
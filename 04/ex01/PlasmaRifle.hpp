#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(const PlasmaRifle&);
        PlasmaRifle& operator=(const PlasmaRifle&);
        virtual ~PlasmaRifle();
        
        void   attack() const;
};

#endif
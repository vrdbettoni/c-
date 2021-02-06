#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    public:
        Squad();
        Squad(Squad const &);
        Squad& operator=(Squad const &);
        ~Squad();

        int getCount() const;
        ISpaceMarine* getUnit(int unit_index) const;
        int push(ISpaceMarine *unit);

    private:
        ISpaceMarine    **_units;
        int             _count;
};

#endif
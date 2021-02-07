#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(std::string const &name);
        Character(Character const &);
        Character& operator=(Character const &);
        virtual ~Character();

        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        std::string const &getName() const;

    private:
        Character();
        std::string _name;
        int         _count;
        AMateria *inventory[4];
};

#endif
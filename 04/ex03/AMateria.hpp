#ifndef AMETERIA_HPP
# define AMETERIA_HPP

#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
    private:
        AMateria();
        std::string     _type;
        unsigned int    _xp;
    
    public:
        AMateria(std::string const &type);
        AMateria(AMateria const &);
        AMateria& operator=(AMateria const &);
        virtual ~AMateria();

        std::string const &getType() const; // Returns the Materia Type
        unsigned int getXP() const; // Returns the Materia's XP

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target); 
};

#endif
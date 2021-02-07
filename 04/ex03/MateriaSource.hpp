#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSouce.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &);
        MateriaSource& operator=(MateriaSource const &);
        ~MateriaSource();

        AMateria* createMateria(std::string const &type);
        void learnMateria(AMateria* materia);

    private:
        int         _count;
        AMateria*   _inventory[4];
};

#endif
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0)
{
    _inventory[0] = 0;
    _inventory[1] = 0;
    _inventory[2] = 0;
    _inventory[3] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &other){*this = other;}

MateriaSource& MateriaSource::operator=(MateriaSource const &other)
{
     for (int i = 0; i < _count; i++)
        delete _inventory[i];
    _count = 0;
    for (int i = 0; i < 4; i++){
        if (i < other._count)
            learnMateria(other._inventory[i]->clone());
        else
            _inventory[i] = 0;
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < _count; i++)
        delete _inventory[i];
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < _count; i++)
        if (_inventory[i]->getType() == type)
            return (_inventory[i]->clone());
    return (0);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (_count > 4 || !materia)
        return ;
    for (int i = 0; i < _count; i++){
        if (_inventory[i] == materia)
            return ;
    }
    _inventory[_count] = materia;
    _count++;
}
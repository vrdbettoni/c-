#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _count(0)
{
    inventory[0] = 0;
    inventory[1] = 0;
    inventory[2] = 0;
    inventory[3] = 0;
}

Character::Character(Character const &other){*this = other;}

Character& Character::operator=(Character const &other)
{
    _name = other._name;
    for (int i = 0; i < _count; i++)
        delete inventory[i];
    _count = 0;
    for (int i = 0; i < 4; i++){
        if (i < other._count)
            equip(other.inventory[i]->clone());
        else
            inventory[i] = 0;
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < _count; i++)
        delete inventory[i];
}

void Character::equip(AMateria *materia)
{
    if (_count > 4 || !materia)
        return ;
    for (int i = 0; i < _count; i++){
        if (inventory[i] == materia)
            return ;
    }
    inventory[_count] = materia;
    _count++;
}

void Character::unequip(int index)
{
    if (index < 0 || index >= _count || !inventory[index])
        return ;
    for (int i = index; i < 3; i++){
        inventory[i] = inventory[i+1];
        inventory[i+1] = 0;
    }
    _count--;
}

void Character::use(int index, ICharacter &target)
{
    if (index < 0 || index >= _count || !inventory[index])
        return ;
    inventory[index]->use(target);
}

std::string const &Character::getName() const {return (_name);}
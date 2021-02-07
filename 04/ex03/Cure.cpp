#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::Cure(Cure const &other) : AMateria("cure")
{*this = other;}

Cure& Cure::operator=(Cure const &other)
{
    AMateria::operator=(other);
    return (*this);
}

Cure::~Cure(){}

AMateria* Cure::clone() const
{
    Cure* newone = new Cure(*this); 
    return (newone);
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
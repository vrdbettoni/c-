#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(Ice const &other) : AMateria("ice")
{*this = other;}

Ice& Ice::operator=(Ice const &other)
{
    AMateria::operator=(other);
    return (*this);
}

Ice::~Ice(){}

AMateria* Ice::clone() const
{
    Ice* newone = new Ice(*this); 
    return (newone);
}

void Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
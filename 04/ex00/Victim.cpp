#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& other){*this = other;}

Victim& Victim::operator=(const Victim& other)
{
    _name = other._name;
    return (*this);
}

Victim::~Victim()
{
    std::cout << "The victim " << _name << " died for no apparent reasons" << std::endl;
}

void Victim::introduce()
{
    std::cout << "I'm " << _name << " and I like otters!" << std::endl;
}

const std::string Victim::getName()const{return(this->_name);}

std::ostream& operator<<(std::ostream &flux, Victim const& victim)
{
    std::string buffer;
    buffer += "I'm ";
    buffer += victim.getName();
    buffer += " and I like otters!";
    buffer += "\n";
    flux << buffer;
    return (flux);
}

void Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}
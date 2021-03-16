#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other){*this = other;}

Sorcerer& Sorcerer::operator=(const Sorcerer& other)
{
    _name = other._name;
    _title = other._title;
    return (*this);
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::introduce()
{
    std::cout << "I am " << _name << ", " << _title << ", and I like ponies!" << std::endl;
}

const std::string Sorcerer::getName()const{return(this->_name);}
const std::string Sorcerer::getTitle() const{return(this->_title);}

std::ostream& operator<<(std::ostream &flux, Sorcerer const& sorcerer)
{
    std::string buffer;
    buffer += "I am ";
    buffer += sorcerer.getName();
    buffer += ", ";
    buffer += sorcerer.getTitle();
    buffer += ", and I like ponies!";
    buffer += "\n";
    flux << buffer;
    return (flux);
}

void Sorcerer::polymorph(Victim const & victim) const
{
    victim.getPolymorphed();
}
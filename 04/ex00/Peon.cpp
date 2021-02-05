#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name), _name(name)
{
    std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(const Peon& other) : Victim(other._name)
{
    std::cout << "Zog Zog." << std::endl; 
}

Peon& Peon::operator=(const Peon& other)
{
    _name = other._name;
    return (*this);
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

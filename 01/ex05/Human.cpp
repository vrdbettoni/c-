#include "Human.hpp"

Human::Human()
{
    
}

const Brain&  Human::getBrain()
{
    return (_brain);
}

std::string Human::identify()
{
    return (_brain.identify());
}
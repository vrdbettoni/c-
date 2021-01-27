#include "Brain.hpp"

Brain::Brain(){Qi = 123;}

const std::string Brain::identify() const
{
    std::ostringstream add;
    add << this;
    return (add.str());
}
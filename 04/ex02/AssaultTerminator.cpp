#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{std::cout << "* teleports from space *" << std::endl;}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other)
{
    (void)other;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &other)
{
    (void)other;
    return (*this);
} 

AssaultTerminator::~AssaultTerminator()
{std::cout << "I'll be back ..." << std::endl;}

AssaultTerminator* AssaultTerminator::clone() const
{
    AssaultTerminator* newone = new AssaultTerminator(*this);
    return (newone); 
}

void AssaultTerminator::battleCry() const
{std::cout << "This code is unclean. Purify it !" << std::endl;}

void AssaultTerminator::rangedAttack() const
{std::cout << "* does nothing *" << std::endl;}

void AssaultTerminator::meleeAttack() const
{std::cout << "* attack with chainfists *" << std::endl;}

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "TacticalMarine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
    (void)other;
    std::cout << "TacticalMarine ready for battle!" << std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &other)
{
    (void)other;
    return (*this);
} 

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine* TacticalMarine::clone() const
{
    TacticalMarine* newone = new TacticalMarine(*this);
    return (newone); 
}

void TacticalMarine::battleCry() const
{std::cout << "For the Holy PLOT!" << std::endl;}

void TacticalMarine::rangedAttack() const
{std::cout << "* attack with a bolter *" << std::endl;}

void TacticalMarine::meleeAttack() const
{std::cout << "* attack with a chainsword *" << std::endl;}


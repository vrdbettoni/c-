#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); i++){
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    std::cout << "\n\n~ TEST ~\n" << std::endl;
    Squad* squadOne = new Squad;
    for (int i = 0; i < 4; i++){
        squadOne->push(new TacticalMarine);
        squadOne->push(new AssaultTerminator);
    }
    Squad* squadTwo = new Squad;
    squadTwo = squadOne;
    std::cout << squadOne->getCount() << " members in Squad One and " << squadTwo->getCount() << " in Squad Two" << std::endl;
    ISpaceMarine* member;
    for (int i = 0; i < squadOne->getCount(); i++){
        member = squadOne->getUnit(i);
        member->battleCry();
        member = squadTwo->getUnit(i);
        member->battleCry();
    }
    std::cout << "Try to add a member of the Squad One in the Squad Two" << std::endl;
    std::cout << squadTwo->getCount() << " members before and ";
    squadTwo->push(squadOne->getUnit(3));
    std::cout << squadTwo->getCount() << " after.\n" << std::endl;
    Squad* squadThree = new Squad(*squadTwo);
    squadThree->push(squadOne->getUnit(2));
    std::cout << squadThree->getCount() << " in squad three" << std::endl;
    delete squadOne;
    std::cout << "\n";
    delete squadThree;
    return (0);
}
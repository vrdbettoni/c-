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
    for (int i = 0; i < vlc->getCount(); ++i){
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

    std::cout << "\nAssignation" << std::endl;
    Squad* squadTwo = new Squad(*squadOne);

    std::cout << squadOne->getCount() << " members in Squad One and " << squadTwo->getCount() << " in Squad Two\n\n" << std::endl;
    
    ISpaceMarine* member;
    for (int i = 0; i < squadOne->getCount(); i++){
        member = squadOne->getUnit(i);
        member->battleCry();
        member = squadTwo->getUnit(i);
        member->battleCry();
    }

    std::cout << "\nTry to add a member of the Squad Two in the Squad Two" << std::endl;
    std::cout << squadTwo->getCount() << " members before and ";
    squadTwo->push(squadTwo->getUnit(3));
    std::cout << squadTwo->getCount() << " after.\n" << std::endl;

    std::cout << "\nNEW Squad of 5 members" << std::endl;    
    Squad* squadThree = new Squad;
    for (int i = 0; i < 5; ++i)
        squadThree->push(new TacticalMarine);

    std::cout << "ADD a member of another squad" << std::endl;
    squadThree->push(squadOne->getUnit(2)->clone());
    std::cout << squadThree->getCount() << " in squad three" << std::endl;

    std::cout << std::endl;
    delete squadOne;
    std::cout << "\n";
    delete squadTwo;
    std::cout << "\n";
    delete squadThree;
    return (0);
}
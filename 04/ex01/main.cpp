#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int main()
{

    std::cout << "~ Test subject's main ~\n" << std::endl;
    Character* moi = new Character("moi");

    std::cout << *moi;
    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();



    moi->equip(pr);
    std::cout << *moi;

    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;

    moi->equip(pr);
    std::cout << *moi;

    moi->attack(b);
    std::cout << *moi;

    moi->attack(b);
    std::cout << *moi;

    delete moi;
    delete pr;
    delete pf;

    std::cout << "\n~ My Test ~\n" << std::endl;
    Character *perso = new Character("A guy");
    AWeapon *plasmaRifle = new PlasmaRifle();
    AWeapon *powerFist = new PowerFist();
    Enemy *superMutant = new SuperMutant();
    Enemy *radScorpion = new RadScorpion();

    std::cout << *perso;
    perso->equip(powerFist);
    while (1){
        std::cout << *perso;
        if (perso->getAp() < perso->getWeapon()->getAPCost()){
            perso->recoverAP();
            std::cout << "recover Ap" << std::endl;
        }
        if (perso->getWeapon()->getDamage() > superMutant->getHP()){
            perso->attack(superMutant);
            break ;
        }
        else
            perso->attack(superMutant);
    }
    std::cout << *perso << "\n" << std::endl;
    std::cout << perso->getName() << " take a break" << std::endl;
    for (int i = 0; i < 5; i++)
        perso->recoverAP();
    perso->equip(plasmaRifle);
    std::cout << *perso;
    while (1){
        std::cout << *perso;
        if (perso->getAp() < perso->getWeapon()->getAPCost()){
            perso->recoverAP();
            std::cout << "recover Ap" << std::endl;
        }
        if (perso->getWeapon()->getDamage() > radScorpion->getHP()){
            perso->attack(radScorpion);
            break ;
        }
        else
            perso->attack(radScorpion);
    }
    std::cout << *perso;
    delete perso;
    delete plasmaRifle;
    delete powerFist;

    return 0;
}





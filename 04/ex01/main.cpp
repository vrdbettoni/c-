#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"

int main()
{
    int damagetoDeal = 10;
    PlasmaRifle plasmaRifle;
    PowerFist   powerFist;

    plasmaRifle.attack();
    powerFist.attack();

    std::cout << "\nTest SuperMutant" << std::endl;
    SuperMutant superMutant;
    for (int i = 0 ; i  < 100 && superMutant.getHP() > 0; i++){
        superMutant.takeDamage(damagetoDeal);
        std::cout << superMutant.getHP() << std::endl;
    }
    std::cout << "\nTest RadScorpion" << std::endl;
    RadScorpion radScorpion;
    for (int i = 0 ; i < 100 && radScorpion.getHP() > 0; i++){
        radScorpion.takeDamage(damagetoDeal);
        std::cout << radScorpion.getHP() << std::endl;
    }

    std::cout << "\nDestructor" << std::endl;
}
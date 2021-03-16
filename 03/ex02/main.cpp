#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    srand(time(NULL));
    std::cout << "Create Trap" << std::endl;
    FragTrap a("Jacques");
    ScavTrap b("Joselyne");
    std::cout << "\nRange and melee attack" << std::endl;
    a.rangedAttack("Joselyne");
    b.takeDamage(20);
    b.rangedAttack("Jacques");
    a.takeDamage(15);
    b.meleeAttack("Jacques");
    a.takeDamage(20);
    a.meleeAttack("Joselyne");
    b.takeDamage(30);

    std::cout << std::endl;
    a.beRepaired(40);
    a.beRepaired(1000);
    std::cout << "\nUltime capacity" << std::endl;
    for (int i = 0; i < 5; i++){
        a.vaulthunter_dot_exe("Michel");
        b.challengeNewcomer();
    }
    std::cout << std::endl;
    a.takeDamage(1000);

    return (0);
}
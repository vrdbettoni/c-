#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    srand(time(NULL));
    FragTrap a("Jacques");
    ScavTrap b("Joselyne");
    a.rangedAttack("Joselyne");
    b.takeDamage(20);
    b.meleeAttack("Jacques");
    a.takeDamage(20);
    a.meleeAttack("Joselyne");
    b.takeDamage(30);
    a.beRepaired(40);
    a.beRepaired(1000);
    for (int i = 0; i < 5; i++){
        a.vaulthunter_dot_exe("Michel");
        b.challengeNewcomer();
    }
    a.takeDamage(1000);
    return (0);
}
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    FragTrap a("Jacques");
    ScavTrap b("Joselyne");
    NinjaTrap c("NinjaOne");
    NinjaTrap d("NinjaTwo");

    a.rangedAttack("Joselyne");
    b.takeDamage(20);
    b.meleeAttack("Jacques");
    d.ninjaShoebox(b);
    a.takeDamage(20);
    a.meleeAttack("Joselyne");
    b.takeDamage(30);
    c.ninjaShoebox(d);
    a.beRepaired(40);
    a.beRepaired(1000);
    for (int i = 0; i < 5; i++){
        a.vaulthunter_dot_exe("Michel");
        b.challengeNewcomer();
    }
    a.takeDamage(1000);

    c.ninjaShoebox(a);
    return (0);
}
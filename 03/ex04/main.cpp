#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
    std::cout << "\n Test FrapTrap" << std::endl;
    FragTrap a("Jacques");
    a.rangedAttack("Joselyne");
    a.takeDamage(20);
    a.beRepaired(40);
    a.beRepaired(1000);
    a.meleeAttack("Joselyne");
    for (int i = 0; i < 5; i++)
        a.vaulthunter_dot_exe("Michel");

    std::cout << "\n Test ScavTrap" << std::endl;
    ScavTrap b("Jacques");
    b.takeDamage(20);
    b.rangedAttack("Jacques");
    b.meleeAttack("Jacques");
    b.takeDamage(30);
    for (int i = 0; i < 5; i++)
        b.challengeNewcomer();

    std::cout << "\n Test NinjaTrap" << std::endl;
    NinjaTrap c("NinjaOne");
    NinjaTrap d("NinjaTwo");
    c.rangedAttack("NinjaTwo");
    c.takeDamage(20);
    c.beRepaired(40);
    c.beRepaired(1000);
    d.meleeAttack("NinjaOne");
    c.ninjaShoebox(a);
    c.ninjaShoebox(b);
    d.ninjaShoebox(c);
    c.takeDamage(1000);


    std::cout << "\n Test Super Trap" << std::endl;
    SuperTrap e("SuperMichelle");
    e.rangedAttack("the wall");
    e.takeDamage(20);
    e.beRepaired(1000);
    e.meleeAttack("another wall");
    e.ninjaShoebox(a);
    e.ninjaShoebox(b);
    e.ninjaShoebox(c);
    e.ninjaShoebox(d);
    for (int i = 0; i < 5; i++)
        e.vaulthunter_dot_exe("Michel");

    std::cout << "\n Call Destructor" << std::endl;

    return (0);
}
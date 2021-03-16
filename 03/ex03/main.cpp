#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    srand(time(NULL));
    std::cout << "Trap Class Creation" << std::endl;
    FragTrap a("Jacques");
    ScavTrap b("Joselyne");
    NinjaTrap c(".....");

    std::cout << "\nAttack" << std::endl;
    c.rangedAttack("Joselyne");
    b.takeDamage(5);
    c.meleeAttack("Jacques");
    a.takeDamage(60);
    a.meleeAttack("Joselyne");
    b.takeDamage(30);

    std::cout << "\nRepair" << std::endl;
    a.beRepaired(40);
    a.beRepaired(1000);

    std::cout << "\nSpecial Attack" << std::endl;
    for (int i = 0; i < 5; i++){
        a.vaulthunter_dot_exe("Michel");
        b.challengeNewcomer();
    }
    c.ninjaShoebox(c);   
    c.ninjaShoebox(b);
    c.ninjaShoebox(a);
    std::cout << std::endl;
    return (0);
}
#include "FragTrap.hpp"

int main(void)
{
    srand(time(NULL));
    FragTrap a("Jacques");
    a.rangedAttack("Xoxo");
    a.takeDamage(89);
    a.meleeAttack("Bubu");
    a.beRepaired(40);
    a.meleeAttack("Bus");
    a.beRepaired(1000);
    for (int i = 0; i < 5; i++){
        a.vaulthunter_dot_exe("Michel");
    }
    a.takeDamage(1000);
    return (0);

}
#include "Human.hpp"

void Human::meleeAttack(std::string const& target)
{std::cout << target << " suffered a melee attack" << std::endl;}

void Human::rangedAttack(std::string const& target)
{std::cout << target << " suffered a ranged attack" << std::endl;}

void Human::intimidatingShout(std::string const& target)
{std::cout << target << " suffered a intimidating shout" << std::endl;}

void Human::action(std::string const& action_name, std::string const& target)
{
    std::string action[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    typedef void (Human::*memFuncPtr) (std::string const& target);
    memFuncPtr ptr[] = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout };
    for (int i = 0; i < 3; ++i) {
        if (action_name == action[i]) {
            (this->*ptr[i]) (target);
            return ;
        }
    }
}
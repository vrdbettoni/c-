#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    std::cout << "Main Subject" << std::endl;
    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);

    std::cout << "\n\nMy main" << std::endl;
    std::cout << "\n~Sorcerer~" << std::endl;
    Sorcerer michel("Michel", "the Guy");
    std::cout << "GetName: " << michel.getName() << std::endl;
    std::cout << "GetTitle: " << michel.getTitle() << std::endl;
    std::cout << "Introduce: ";
    michel.introduce();
    std::cout << "Overload << : " << michel << std::endl;

    std::cout << "~Victim~" << std::endl;
    Victim bob("Bob");
    std::cout << "GetName: " << bob.getName() << std::endl;
    std::cout << "Introduce: ";
    bob.introduce();
    std::cout << "Overload << : " << bob << std::endl;

    std::cout << "~Peon~" << std::endl;
    Peon blob("Blob");
    std::cout << "GetName: " << blob.getName() << std::endl;
    std::cout << "Introduce: ";
    blob.introduce();
    std::cout << "Overload << : " << blob << std::endl;

    std::cout << "~Polymorph~" << std::endl;
    michel.polymorph(bob);
    michel.polymorph(blob);
    std::cout << std::endl;
    return 0;
}
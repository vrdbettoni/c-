#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    std::cout << "\t** SUBJECT MAIN **" << std::endl;
    std::cout << std::endl;

    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* moi = new Character("moi");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);

    ICharacter* bob = new Character("bob");

    moi->use(0, *bob);
    moi->use(1, *bob);
    std::cout << std::endl;

    std::cout << "\t** ADDITIONAL TESTS **" << std::endl;
    std::cout << std::endl;

    std::cout << "unequip(42)" << std::endl;
    moi->unequip(42);
    std::cout << "unequip(0)" << std::endl;
    moi->unequip(0);
    std::cout << "unequip(-32)" << std::endl;
    moi->unequip(-42);
    std::cout << std::endl;

    std::cout << "use(0, *bob)" << std::endl;
    moi->use(0, *bob);
    std::cout << "use(1, *bob)" << std::endl;
    moi->use(1, *bob);
    std::cout << "use(42, *bob)" << std::endl;
    moi->use(42, *bob);
    std::cout << "use(-29, *bob)" << std::endl;
    moi->use(-29, *bob);
    std::cout << std::endl;

    tmp = src->createMateria("cure");
    std::cout << "equip(cure)" << std::endl;
    moi->equip(tmp);
    tmp = src->createMateria("ice");
    std::cout << "equip(ice)" << std::endl;
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    std::cout << "equip(cure) inventory is now full" << std::endl;
    std::cout << "equip(ice)" << std::endl;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    std::cout << std::endl;

    std::cout << "use(0, *bob)" << std::endl;
    moi->use(0, *bob);
    std::cout << "use(1, *bob)" << std::endl;
    moi->use(1, *bob);
    std::cout << "use(2, *bob)" << std::endl;
    moi->use(2, *bob);
    std::cout << "use(3, *bob)" << std::endl;
    moi->use(3, *bob);
    std::cout << std::endl;

    std::cout << "\t** ASSIGNATION TESTS **" << std::endl;
    std::cout << "\t> create two new diff typed AMateria" << std::endl;
    std::cout << std::endl;

    AMateria* first = src->createMateria("cure");
    AMateria* second = src->createMateria("ice");

    std::cout << "first->use(*bob)" << std::endl;
    first->use(*bob);
    std::cout << "first getXP " << first->getXP() << std::endl;
    std::cout << "first getType " << first->getType() << std::endl;
    std::cout << std::endl;
    std::cout << "second getXP " << second->getXP() << std::endl;
    std::cout << "second getType " << second->getType() << std::endl;
    std::cout << std::endl;
    std::cout << "*second = first*" << std::endl;
    *second = *first;
    std::cout << std::endl;
    std::cout << "first getXP " << second->getXP() << std::endl;
    std::cout << "first getType " << second->getType() << std::endl;
    std::cout << std::endl;

    std::cout << "use(0, *bob) and unequip(0)" << std::endl;
    moi->use(0, *bob);
    moi->unequip(0);
    std::cout << std::endl;

    std::cout << "equip(second) and use(0, *bob)" << std::endl;
    moi->equip(second);
    moi->use(0, *bob);
    std::cout << std::endl;

    std::cout << "\t** COPY CONSTRUCTOR TESTS **" << std::endl;
    std::cout << "\t> create two new Cure objects" << std::endl;
    std::cout << std::endl;

    Cure third;
    std::cout << "third.use(*bob)" << std::endl;
    third.use(*bob);
    std::cout << std::endl;

    std::cout << "third getXP " << third.getXP() << std::endl;
    std::cout << "third getType " << third.getType() << std::endl;
    std::cout << std::endl;

    std::cout << "Copy construction of fourth using third" << std::endl;
    Cure fourth (third);
    std::cout << std::endl;

    std::cout << "fourth getXP " << fourth.getXP() << std::endl;
    std::cout << "fourth getType " << fourth.getType() << std::endl;

    delete bob;
    delete moi;
    delete src;

    return 0;
}

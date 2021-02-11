#include "identifier.hpp"

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A";
    if (dynamic_cast<B*>(p))
        std::cout << "B";
    if (dynamic_cast<C*>(p))
        std::cout << "C";
}

void identify_from_reference(Base &p)
{identify_from_pointer(&p);}

Base *generate(char u)
{
    if (u == 'A')
        return (new A);
    if (u == 'B')
        return (new B);
    return (new C);
}

int main()
{
    srand(time(NULL));
    std::string tmp = "ABC";
    char tmpTemoin[20];
    Base *tmpBase[20];
    for (int i = 0; i < 20; i++){
        tmpTemoin[i] = tmp[rand() % 3];
        tmpBase[i] = generate(tmpTemoin[i]);
    }
    std::cout << "Temoin : Pointer - Reference" << std::endl;
    for (int i = 0; i < 20; i++){
        std::cout << tmpTemoin[i] << ": ";
        identify_from_pointer(tmpBase[i]);
        std::cout << " - ";
        identify_from_reference(*(tmpBase[i]));
        std::cout << std::endl;
        delete (tmpBase[i]);
    }
}
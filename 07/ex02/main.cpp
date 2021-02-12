
#include "Array.hpp"

int main()
{
    try{
        Array<double> p(10);
        std::cout << "print an array with a size of " << p.size() << std::endl;
        for (int i = 0; i < 10; i++)
            std::cout << p[i] << " ";
        std::cout << "\n";
        Array<double> q(15);
        for (int i = 0; i < 15; i++)
            q[i] = i + 0.5;
        std::cout << "\n" << "Another with a size of " << q.size() << std::endl;
        for (int i = 0; i < 15; i++)
            std::cout << q[i] << " ";
        std::cout << "\n";
        std::cout << "\nFirst = second, then, print it" << std::endl;
        p = q;
        for (unsigned int i = 0; i < p.size(); i++)
            std::cout << p[i] << " ";
        std::cout << "\n";
        std::cout << "\nModify the second and print them" << std::endl;
        for (int i = 0; i < 15; i++)
            q[i] = 42;
        for (unsigned int i = 0; i < p.size(); i++)
            std::cout << p[i] << " ";
        std::cout << std::endl;
        for (int i = 0; i < 15; i++)
            std::cout << q[i] << " ";
        std::cout << "\n";
        std::cout << "\nDefault constructor" << std::endl;
        Array<int> a;
        std::cout << a.size() << std::endl;
        std::cout << "\n";
        std::cout << "Copy constructor" << std::endl;
        Array<int>b(a);
        std::cout << "\n";
        std::cout << "Address and size of a: " << a << " (" << a.size() << ")" << ", of b:" << b << " (" << b.size() << ")" << std::endl;
        std::cout << "\n";
        std::cout << "Try to access b[1]" << std::endl;
        std::cout << b[1] << std::endl;
    }
    catch (const std::out_of_range &e){
        std::cout << "catch an out_of_range exception." << std::endl;
    }
}
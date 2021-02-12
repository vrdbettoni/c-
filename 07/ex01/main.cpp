#include "iter.hpp"

int main()
{
    std::string s[7] = {"bonjour", "hello", "guten tag", "kaixo", "Merhaba", "Buenos dias", "Bonghjornu"};
    for (int i = 0; i < 8; i++){
        std::cout << "[" << i << "] ";
        ::iter(s, i, &display);
        std::cout << std::endl;
    
    }
    std::cout << std::endl;

    double d[3] = {100, 200, 300};
    ::iter(d, 3, &display);
    std::cout << "\n" << std::endl;

    char c[3] = {'a', 'b', 'c'};
    ::iter(c, 3, &display);
    std::cout << "\n" << std::endl;

    float f[3] = {45.5f, 42.0f, 47.8f}; 
    ::iter(f, 3, &display);
    std::cout << "\n" << std::endl;

    void *v[3] = {&d[0], &d[1], &d[2]};
    ::iter(v, 3, &display);

    return (0);
}
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    (void)av;
    std::string buffer;

    if (ac == 1){
        while (std::getline(std::cin, buffer))
            std::cout << buffer << std::endl;
        return (0);
    }
    for (int i = 0; av[i]; i++)
        std::cout << av[i] << std::endl;
    return (0);
}
#include <iostream>
#include <fstream>
#include <cstring>

int main(int ac, char **av)
{
    if (ac != 4 || !av[1] || !av[2] || !av[3]){
        std::cout << "To use this program, make :" << std::endl << "./replace file_name s1 s2" << std::endl;
        return (1);
    }
    std::string     buffer;
    std::string     fileName(av[1]);
    std::ifstream   file(av[1]);
    if (!file){
        std::cout << "Error: cannot open " << av[1] << std::endl;
        return (1);
    }
    int len_s1 = strlen(av[2]);
    int len_s2 = strlen(av[3]);
    std::ofstream finalFile(fileName += ".REPLACE");
    while (std::getline (file, buffer)) {
        for (std::string::size_type pos = 0u; (pos = buffer.find(av[2], pos)) != std::string::npos; pos += len_s2)
            buffer.replace(pos, len_s1, av[3]);
        finalFile << buffer << std::endl;
    }
    return (0);
} 
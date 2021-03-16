#include "serialize.hpp"
#include <unistd.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    void *p;
    p = serialize();
 
    Data *data;
    data = deserialize(p);
    std::cout << "s1: " << data->s1 << std::endl;
    std::cout << "n:  " << data->n << std::endl;
    std::cout << "s2: " << data->s2 << std::endl; 
    delete (data);
    delete reinterpret_cast<char*>(p);
}
#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <string>
#include <unistd.h>
#include <iostream>
#include <stdlib.h>

struct Data
{
    std::string     s1;
    int             n;
    std::string     s2;
};

void *serialize(void);
Data *deserialize(void *raw);

#endif
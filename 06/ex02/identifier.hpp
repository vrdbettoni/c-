#ifndef IDENTIFIER_HPP
# define IDENTIFIER_HPP

#include <string>
#include <iostream>
#include <stdlib.h>

class Base
{
    public:
        virtual ~Base(){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif
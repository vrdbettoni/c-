#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
    void iter(T& array, int length, void (*f)(T const &e)){
        for (int i = 0; i < lenght; i++){
            (*f)(array[i]);
        }
    }

#endif
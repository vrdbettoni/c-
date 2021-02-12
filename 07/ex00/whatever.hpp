#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <iostream>

template<typename T>
    T max(const T& a, const T& b){
        return (a > b ? a : b);
    }

template<typename T>
    T min(const T& a, const T& b){
        return (a > b ? b : a);
    }

template<typename T>
    void swap(T& a, T& b){
        T p = b;
        b = a;
        a = p;
    }

#endif
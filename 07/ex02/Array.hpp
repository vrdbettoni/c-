#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>

template<typename T>
class Array
{
    public:
        Array() : _len(0), _data(0){}

        Array(size_t len) : _len(len), _data(new T[len]()){}

        Array(Array const &other) : _data(0){*this = other;}

        Array& operator=(Array const &other)
        {
            if (this == &other)
                return (*this);
            delete[] _data;
            _data = new T[other._len];
            for (size_t i = 0; i < other._len; i++)
                _data[i] = other._data[i];
            _len = other._len;
            return (*this);
        }

        ~Array(){delete[] _data;}

        T& operator[](size_t index)
        {
            if (index >= _len)
                throw std::out_of_range("Bad access. Out of range.");
            return (_data[index]);
        }

        size_t size(){return (_len);}
    
    private:
        size_t      _len;
        T*          _data;
};

template<typename T>
std::ostream& operator<<(std::ostream &flux, Array<T> a)
{
    flux << &a;
    return (flux);
}

#endif
#include "span.hpp"

Span::Span(unsigned int maxsize) : _maxSize(maxsize){}

Span::Span(Span const &other){*this = other;}

Span& Span::operator=(Span const &other)
{
    if (this == &other)
        return (*this);
    _maxSize = other._maxSize;
    _data = other._data;
    return (*this);
}

Span::~Span(){_data.clear();}

void Span::addNumber(int toAdd)
{
    if (_maxSize < _data.size())
        throw::Span::NoPlaceException();
    _data.push_back(toAdd);
}

void Span::addNumber(std::list<int>::iterator it, std::list<int>::iterator ot)
{
    if (_maxSize < _data.size() + std::distance(it, ot))
        throw::Span::NoPlaceException();
    _data.insert(_data.end(), it, ot);
}

unsigned int Span::shortestSpan()
{
    if (_data.size() < 2)
        throw::Span::EmptyException();
    _data.sort();
    std::list<int>::iterator first = _data.begin();
    std::list<int>::iterator second = first;
    second++;
    int diff = INT_MAX;
    while (second != _data.end()){
        if (diff > std::abs(*first - *second))
            diff = std::abs(*first - *second);
        first++;
        second++;
    }
    return (diff);       
}

unsigned int Span::longestSpan()
{
    if (_data.size() < 2)
        throw::Span::EmptyException();
    int min = *std::min_element(_data.begin(), _data.end());
    int max = *std::max_element(_data.begin(), _data.end());   
   return (std::abs(max - min));
}

int Span::getSize(){return (_data.size());}

const char* Span::NoPlaceException::what() const throw()
{return ("Maximum size reached.");}

const char* Span::EmptyException::what() const throw()
{return ("Not enough element to calcule span.");}

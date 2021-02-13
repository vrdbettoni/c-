#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <list>
#include <iostream>
#include <climits>

class Span
{
    public:
        Span(unsigned int maxsize);
        Span(Span const &);
        Span& operator=(Span const &);
        ~Span();

        void             addNumber(std::list<int>::iterator it, std::list<int>::iterator ot);
        void             addNumber(int);
        unsigned int     shortestSpan();
        unsigned int     longestSpan(); 
        int              getSize();
        
        class NoPlaceException: public std::exception {
            virtual const char* what() const throw();
        };
        class EmptyException: public std::exception {
            virtual const char* what() const throw();
        };

    private:
        Span();
        unsigned int        _maxSize;
        std::list<int>      _data;
};

#endif
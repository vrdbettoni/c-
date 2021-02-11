#ifndef SCALAIRCONVERSION_HPP
# define SCALAIRCONVERSION_HPP

#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>

class Scalairconversion
{
    public:
        Scalairconversion(const std::string &str);
        Scalairconversion(const Scalairconversion &);
        Scalairconversion& operator=(const Scalairconversion &);
        ~Scalairconversion();

        void convert();
    
    private:
        Scalairconversion();
        void                toChar();
        void                toInt();
        void                toFloat();
        void                toDouble();
        
        std::string         _str;
        double              _double;
        bool                _error;
        bool                _nan;
};

#endif
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int toconvert);
        Fixed(const float toconvert);
        ~Fixed();

        Fixed(const Fixed& newone);
        Fixed& operator=(const Fixed& newone);

        bool    operator>(const Fixed& newone);
        bool    operator<(const Fixed& newone);
        bool    operator>=(const Fixed& newone);
        bool    operator<=(const Fixed& newone);
        bool    operator==(const Fixed& newone);
        bool    operator!=(const Fixed& newone);

        Fixed operator+(const Fixed& newone);
        Fixed operator-(const Fixed& newone);
        Fixed operator*(const Fixed& newone);
        Fixed operator/(const Fixed& newone);

        static Fixed& min(Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, const Fixed& b);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

    private:
        int                 fixed_value;
        const static int    nbits = 8;
};

std::ostream& operator<<(std::ostream &flux, Fixed const& fixed);
Fixed& min(Fixed& a, const Fixed& b);
Fixed& max(Fixed& a, const Fixed& b);

#endif
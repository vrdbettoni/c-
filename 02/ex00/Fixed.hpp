#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& newone);
        Fixed& operator=(const Fixed& newone);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:
        int                 fixed_value;
        const static int    nbits = 8;
};

#endif
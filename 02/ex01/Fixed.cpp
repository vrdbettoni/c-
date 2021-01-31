#include "Fixed.hpp"

// Constructor
Fixed::Fixed() : fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int toconvert) : fixed_value(toconvert << nbits)
{
    std::cout << "Constructor for int called" << std::endl;
}

Fixed::Fixed(const float toconvert) : fixed_value(roundf(toconvert * ( 1 << nbits)))
{
    std::cout << "Constructor for float called" << std::endl;
}

Fixed::Fixed(const Fixed& newone)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_value = newone.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& nenwone)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_value = nenwone.getRawBits();
    return (*this);
}

// Destructor
Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

//Overload <<
std::ostream& operator<<(std::ostream &flux, Fixed const& fixed)
{
    flux << fixed.toFloat();
    return (flux);
}

// Member Functions
int Fixed::getRawBits() const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixed_value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)fixed_value / (float)(1 << Fixed::nbits));
}

int Fixed::toInt(void) const
{
    return (fixed_value >> Fixed::nbits);
}
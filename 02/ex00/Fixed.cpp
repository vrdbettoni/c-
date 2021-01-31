#include "Fixed.hpp"

Fixed::Fixed() :fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
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
#include "Fixed.hpp"

// Constructor
Fixed::Fixed() : fixed_value(0){}

Fixed::Fixed(const int toconvert) : fixed_value(toconvert << nbits){}

Fixed::Fixed(const float toconvert) : fixed_value(roundf(toconvert * ( 1 << nbits))){}

Fixed::Fixed(const Fixed& newone){this->fixed_value = newone.getRawBits();}

Fixed& Fixed::operator=(const Fixed& nenwone)
{
    this->fixed_value = nenwone.getRawBits();
    return (*this);
}

// Destructor
Fixed::~Fixed() {}

//Overload <<
std::ostream& operator<<(std::ostream &flux, Fixed const& fixed)
{
    flux << fixed.toFloat();
    return (flux);
}

// Member Functions
int Fixed::getRawBits() const {return (fixed_value);}

void Fixed::setRawBits(int const raw){fixed_value = raw;}

float Fixed::toFloat(void) const
{
    return ((float)fixed_value / (float)(1 << Fixed::nbits));
}

int Fixed::toInt(void) const
{
    return (fixed_value >> Fixed::nbits);
}

//Compare operator
bool Fixed::operator>(const Fixed& newone)  const {return(this->getRawBits() > newone.getRawBits());}
bool Fixed::operator<(const Fixed& newone) const {return(this->getRawBits() < newone.getRawBits());}
bool Fixed::operator>=(const Fixed& newone) const {return(this->getRawBits() >= newone.getRawBits());}
bool Fixed::operator<=(const Fixed& newone) const {return(this->getRawBits() <= newone.getRawBits());}
bool Fixed::operator==(const Fixed& newone) const {return(this->getRawBits() == newone.getRawBits());}
bool Fixed::operator!=(const Fixed& newone) const {return(this->getRawBits() != newone.getRawBits());}

//Arithmetic operator
Fixed Fixed::operator+(const Fixed& newone)
{
    Fixed ret(*this);
    ret.setRawBits(ret.getRawBits() + newone.getRawBits());
    return (ret);
}

Fixed Fixed::operator-(const Fixed& newone)
{
    Fixed ret(*this);
    ret.setRawBits(ret.getRawBits() - newone.getRawBits());
    return (ret);
}

Fixed Fixed::operator*(const Fixed& newone)
{
    Fixed ret(*this);
    ret.setRawBits((ret.getRawBits() * newone.getRawBits()) / (1 << Fixed::nbits));
    return (ret);
}

Fixed Fixed::operator/(const Fixed& newone)
{
    Fixed ret(*this);
    if (newone.getRawBits() == 0){
        std::cout << "Division par 0" << std::endl;
        ret.setRawBits(0);
        return (ret);
    }
    ret.setRawBits(ret.getRawBits() * (1 << Fixed::nbits) / newone.getRawBits());
    return (ret);
}

//Post & Pre incrementation
Fixed Fixed::operator++()
{
    fixed_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    fixed_value++;
    return (tmp);
}

Fixed Fixed::operator--()
{
    fixed_value++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    fixed_value++;
    return (tmp);
}

//Member function min / max
Fixed& Fixed::min(Fixed& a, Fixed& b){return (a < b ? a : b);}
Fixed& Fixed::max(Fixed& a, Fixed& b){return (a < b ? b : a);}
Fixed const &Fixed::min(const Fixed& a, const Fixed& b){return (a < b ? a : b);}
Fixed const &Fixed::max(const Fixed& a, const Fixed& b){return (a < b ? b : a);}
//Overload function min / max
Fixed& min(Fixed& a, Fixed& b){return (a < b ? a : b);}
Fixed& max(Fixed& a, Fixed& b){return (a < b ? b : a);}
Fixed const &min(const Fixed& a, const Fixed& b){return (a < b ? a : b);}
Fixed const &max(const Fixed& a, const Fixed& b){return (a < b ? b : a);}

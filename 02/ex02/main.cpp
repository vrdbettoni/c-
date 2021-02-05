#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

int main(void) {
    Fixed a (4.32f);
    Fixed b (4.20f);
    Fixed c (4);
    Fixed d (4);

    std::cout << std::boolalpha << a << " > " << b << " is " << (a > b) << std::endl;
    std::cout << std::boolalpha << a << " >= " << b << " is " << (a >= b) << std::endl;
    std::cout << std::boolalpha << a << " < " << b << " is " << (a < b) << std::endl;
    std::cout << std::boolalpha << a << " <= " << b << " is " << (a <= b) << std::endl;
    std::cout << std::boolalpha << a << " == " << b << " is " << (a == b) << std::endl;
    std::cout << std::boolalpha << c << " == " << d << " is " << (c == d) << std::endl;
    std::cout << std::endl;

    std::cout << "a++ = " << a++ << " a = " << a << std::endl;
    std::cout << "a = " << a << " --a = " << --a << std::endl;
    std::cout << "a = " << a << " ++a = " << ++a << std::endl;
    std::cout << "a-- = " << a-- << " a = " << a << std::endl;
    std::cout << std::endl;

    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << a << " * " << d << " = " << (a * d) << std::endl;
    std::cout << a << " / " << d << " = " << (a / d) << std::endl;
    std::cout << a << " / " << Fixed(5) << " = " << (a / Fixed(5)) << std::endl;
    std::cout << std::endl;

    std::cout << "max(" << c << ", " << d << ") = " << max(c, d) << std::endl;
    std::cout << "max(" << a << ", " << b << ") = " << max(a, b) << std::endl;
    std::cout << "min(" << a << ", " << b << ") = " << min(a, b) << std::endl;
    std::cout << "std::max(" << a << ", " << b << ") = " << std::max(a, b) << std::endl;
    std::cout << "std::min(" << a << ", " << b << ") = " << std::min(a, b) << std::endl;
    std::cout << "Fixed::max(" << c << ", " << d << ") = " << Fixed::max(c, d) << std::endl;
    std::cout << "Fixed::max(" << a << ", " << d << ") = " << Fixed::max(a, d) << std::endl;
    std::cout << "Fixed::min(" << a << ", " << d << ") = " << Fixed::min(a, d) << std::endl;
    std::cout << a << " + " << b << " = " << a + b << std::endl;

    std::cout << std::endl << "subjects main" << std::endl;
    Fixed e;
    Fixed const f( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << e << std::endl;
    std::cout << ++e << std::endl;
    std::cout << e << std::endl;
    std::cout << e++ << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    std::cout << Fixed::max( e, f ) << std::endl;

    Fixed g = 5;
    e = 0;
    std::cout << " Division par 0 "  << g / e << std::endl;
    return 0;
}

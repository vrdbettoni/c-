#include "whatever.hpp"

int main(void) {

    int a = 2;
    int b = 3;
    std::cout << "Subject's main" << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";std::string d = "chaine2";
    ::swap(c, d);std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    std::cout << "\n" << std::endl;
    std::string s1 = "s1"; std::string s2 = "s2";
    double d1 = 100; double d2 = 200;
    char c1 = '1'; char c2 = '2';
    float f1 = 45.5f ; float f2 = 42.0f;
    void *v1 = &a; void *v2 = &b;
    
    std::cout << "string\n" << "Valeur 1: " << s1 << " - Valeur 2: " << s2 << " | min: " << ::min(s1, s2) << " | max: " << ::max(s1, s2);
    ::swap(s1, s2);
    std::cout << " | swap: Valeur1: " << s1 << " - Valeur2: " << s2 << std::endl;
    
    std::cout << "\ndouble\n" << "Valeur 1: " << d1 << " - Valeur 2: " << d2 << " | min: " << ::min(d1, d2) << " | max: " << ::max(d1, d2);
    ::swap(d1, d2);
    std::cout << " | swap: Valeur1: " << d1 << " - Valeur2: " << d2 << std::endl;

    std::cout << "\nchar\n" << "Valeur 1: " << c1 << " - Valeur 2: " << c2 << " | min: " << ::min(c1, c2) << " | max: " << ::max(c1, c2);
    ::swap(c1, c2);
    std::cout << " | swap: Valeur1: " << c1 << " - Valeur2: " << s2 << std::endl;

    std::cout << "\nfloat\n" << "Valeur 1: " << f1 << " - Valeur 2: " << f2 << " | min: " << ::min(f1, f2) << " | max: " << ::max(f1, f2);
    ::swap(f1, f2);
    std::cout << " | swap: Valeur1: " << f1 << " - Valeur2: " << f2 << std::endl;

    std::cout << "\nvoid*\n" << "Valeur 1: " << v1 << " - Valeur 2: " << v2 << " | min: " << ::min(v1, v2) << " | max: " << ::max(v1, v2);
    ::swap(v1, v2);
    std::cout << " | swap: Valeur1: " << v1 << " - Valeur2: " << v2 << std::endl;
    return 0;
}

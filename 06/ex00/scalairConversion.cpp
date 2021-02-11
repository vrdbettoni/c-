#include "scalairConversion.hpp"

Scalairconversion::Scalairconversion(const std::string &str) : _str(str), _error(false)
{
    char *end;
    _double = strtod(str.c_str(), &end);
    if (str == end || _double == HUGE_VAL){
        if (str.length() == 1 || (str.length() == 3 && str[0] == '\'' && str[2] == '\''))
            _double = str.length() == 1 ? static_cast<double>(str[0]) : static_cast<double>(str[1]);
        else
            _error = true;
    }
    _nan = std::isnan(_double) ? true : false;
}

Scalairconversion::Scalairconversion(const Scalairconversion &other)
{*this = other;}

Scalairconversion& Scalairconversion::operator=(const Scalairconversion &other)
{
    if (this == &other)
        return (*this);
    _str = other._str;
    _double = other._double;
    _error = other._error;
    return (*this);
}

Scalairconversion::~Scalairconversion()
{}

void Scalairconversion::toInt()
{
    if (_double > INT_MAX || INT_MIN > _double || _error || _nan)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(_double) << std::endl; 
}

void Scalairconversion::toChar()
{
    if (_double > CHAR_MAX || CHAR_MIN > _double || _error || _nan)
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(_double))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(_double) << "'" << std::endl;
}

void Scalairconversion::toFloat()
{
    if (_error)
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(_double) << "f" << std::endl;
}

void Scalairconversion::toDouble()
{
    if (_error)
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << _double << std::endl;
}

void Scalairconversion::convert()
{
    typedef void (Scalairconversion::*convPtr) (void);
    convPtr conv[] = {&Scalairconversion::toChar, &Scalairconversion::toInt, &Scalairconversion::toFloat, &Scalairconversion::toDouble};
    std::string choice[] = {"char: ", "int: ", "float: ", "double: "};
    for (int i = 0; i < 4; i++){
        std::cout << choice[i];
        (this->*conv[i])();
    }
}

int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "Use ./conversion $(to_convert)" << std::endl;
        return (0);
    }
    Scalairconversion conversion(av[1]);
    conversion.convert();
    return (0);
}
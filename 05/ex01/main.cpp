#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 3){
        std::cout << "./a.out GradeSignature GradeExecution" << std::endl;
        return (1);
    }
    int signature = atoi(av[1]);
    int execution = atoi(av[2]);

    Bureaucrat b("Bob", 150);
    try {
    Form f("recu", signature, execution);
    }
    catch(std::exception const &e){
        std::cout << e.what();
        exit(1);
    }

    int i = 150;
    Form f("recu", signature, execution);
    std::cout << b;
    std:: cout << f << std::endl;
    while (1){
        try{
            b.signForm(f);
        }
        catch(std::exception const &e){
            std::cout << "[" << i << "] ";
            i--;
            std::cout << e.what() << std::endl;
        }
        if (f.isSigned())
            break;
        b.incrementGrade();
    }
    std::cout << "\n" << b << f;
    return (0);
}
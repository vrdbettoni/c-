#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\nTEST GRADE 10 TO -50" << std::endl;
    try{
        for (int i = 10; i > -50 ; i--){
            std::cout << "\nTry to create a bureaucrat with grade " << i << std::endl;
            Bureaucrat b("Bob", i);
            std::cout << b;
        }
    }
    catch (std::exception const &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\nTEST GRADE 190 TO -190" << std::endl;
    try{
        for (int i = 190; i > -190 ; i--){
            std::cout << "\nTry to create a bureaucrat with grade " << i << std::endl;
            Bureaucrat b("James", i);
            std::cout << b;
        }
    }
    catch (std::exception const &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTEST GRADE 145 TO 160" << std::endl;
    try{
        for (int i = 145; i < 160 ; i++){
            std::cout << "\n\nTry to create a bureaucrat with grade " << i << std::endl;
            Bureaucrat b("A man", i);
            std::cout << b;
        }
    }
    catch (std::exception const &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\nTEST GRADE 150 to MAX (incrementation)" << std::endl;
    try{
        Bureaucrat b("A man", 150);
        while (1){
            std::cout << b.getGrade() << " ";
            if (!(b.getGrade() % 10))
                std::cout << std::endl;
            b.incrementGrade();
        }
    }
    catch (std::exception const &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\nTEST GRADE 1 TO MIN (decrementation)" << std::endl;
    try{
        Bureaucrat b("A man", 1);
        while (1){
            std::cout << b.getGrade() << " ";
            if (!(b.getGrade() % 10))
                std::cout << std::endl;
            b.decrementGrade();
        }
    }
    catch (std::exception const &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdlib.h>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat boss("boss", 1);
    Bureaucrat chef("chef", 50);
    Bureaucrat worker("worker", 130);
    Bureaucrat team[3] = {boss, chef, worker};

    ShrubberyCreationForm a("bob");
    RobotomyRequestForm b("bob");
    PresidentialPardonForm c("bob");

    bool presidential = false;
    bool robotomy = false;
    bool shruberry = false;

     int i = 2;
    while (!presidential || !robotomy || !shruberry || i >= 0){
        std::cout << team[i];
        try{
            std::cout << a;
            team[i].signForm(a);
            team[i].executeForm(a);
            shruberry = true;
        }
        catch(std::exception const &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        try{
            std::cout << b;
            team[i].signForm(b);
            team[i].executeForm(b);
            robotomy = true;
        }
        catch(std::exception const &e){
            std::cout << e.what() << std::endl; 
        }
        std::cout << std::endl;
        try{
            std::cout << a;
            team[i].signForm(c);
            team[i].executeForm(c);
            presidential = true;
        }
        catch(std::exception const &e){
            std::cout << e.what() << std::endl;               
        }
        std::cout << "\n" << std::endl;
        i--;
    }        
}
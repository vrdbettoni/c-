#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdlib.h>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{ 
    bool        presidential = false;
    bool        robotomy = false;
    bool        shruberry = false;
    Bureaucrat  boss("boss", 1);
    Bureaucrat  chef("chef", 50);
    Bureaucrat  worker("worker", 130);
    Bureaucrat  team[3] = {boss, chef, worker};
    Intern      aRandomIntern;
    Form        *a;
    Form        *b;
    Form        *c;

    try{
        a = aRandomIntern.makeForm("ShrubberyCreationForm", "the_garden_of_bob");
        b = aRandomIntern.makeForm("RobotomyRequestForm", "bob");
        c = aRandomIntern.makeForm("PresidentialPardonForm", "bob");
    }
    catch(std::exception const &e){
        std::cout << e.what() << std::endl;
        return (1);
    }

    int i = 2;
    while (!presidential || !robotomy || !shruberry || i >= 0){
        std::cout << team[i];
        try{
            std::cout << *a;
            team[i].signForm(*a);
            std::cout << *a;
            team[i].executeForm(*a);
            shruberry = true;
        }
        catch(std::exception const &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        try{
            std::cout << *b;
            team[i].signForm(*b);
            std::cout << *b;
            team[i].executeForm(*b);
            robotomy = true;
        }
        catch(std::exception const &e){
            std::cout << e.what() << std::endl; 
        }
        std::cout << std::endl;
        try{
            std::cout << *c;
            team[i].signForm(*c);
            std::cout << *c;
            team[i].executeForm(*c);
            presidential = true;
        }
        catch(std::exception const &e){
            std::cout << e.what() << std::endl;               
        }
        std::cout << "\n" << std::endl;
        i--;
    }      
}
#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &);
        Intern& operator=(Intern const &);
        ~Intern();

        Form* makeForm(const std::string form, const std::string target);
        Form* initShrubberyCreationForm(std::string target);
        Form* initRobotomyRequestForm(std::string target);
        Form* initPresidentialPardonForm(std::string target);
        
        class FormDontExist : public std::exception
        {virtual const char *what() const throw();};
        
    private:
        std::string     _form;
        std::string     _target;
};

#endif
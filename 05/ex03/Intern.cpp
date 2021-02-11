#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const &other)
{*this = other;}

Intern& Intern::operator=(Intern const &other)
{
    if (this != &other){
        _form = other._form;
        _target = other._target;
    }
    return (*this);
}

Intern::~Intern()
{}

Form *Intern::initShrubberyCreationForm(std::string target)
{return(new ShrubberyCreationForm(target));}

Form *Intern::initRobotomyRequestForm(std::string target)
{return(new RobotomyRequestForm(target));}

Form *Intern::initPresidentialPardonForm(std::string target)
{return(new PresidentialPardonForm(target));}

const char* Intern::FormDontExist::what() const throw()
{return ("Form Don't Exist.");}

Form* Intern::makeForm(const std::string form, const std::string target)
{
    std::string choice[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    typedef Form* (Intern::*internPtr) (std::string message);
    internPtr iptr[] = {&Intern::initShrubberyCreationForm, &Intern::initRobotomyRequestForm, &Intern::initPresidentialPardonForm};
    for (int i = 0; i < 3; i++){
        if (choice[i] == form)
            return ((this->*iptr[i])(target));
    }
    throw::Intern::FormDontExist();
    return (0);
}
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

Form *Intern::initShrubberyCreationForm(std::string const &target) const
{return(new ShrubberyCreationForm(target));}

Form *Intern::initRobotomyRequestForm(std::string const &target) const
{return(new RobotomyRequestForm(target));}

Form *Intern::initPresidentialPardonForm(std::string const &target) const
{return(new PresidentialPardonForm(target));}

const char* Intern::FormDontExist::what() const throw()
{return ("Form Don't Exist.");}

Form* Intern::makeForm(const std::string &form, const std::string &target) const
{
    std::string choice[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    typedef Form* (Intern::*internPtr) (std::string const &message) const;
    internPtr iptr[] = {&Intern::initShrubberyCreationForm, &Intern::initRobotomyRequestForm, &Intern::initPresidentialPardonForm};
    for (int i = 0; i < 3; i++){
        if (choice[i] == form)
            return (this->*iptr[i])(target);
    }
    throw::Intern::FormDontExist();
    return (0);
}
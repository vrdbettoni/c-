#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw::Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw::Bureaucrat::GradeTooLowException();

}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name), _grade(other._grade){}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other)
{
    if (this != &other)
        _grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::string const &Bureaucrat::getName() const {return (_name);}

int Bureaucrat::getGrade() const {return (_grade);}

void Bureaucrat::incrementGrade()
{
    if ( _grade - 1 < 1)
        throw::Bureaucrat::GradeTooHighException();
    _grade --;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw::Bureaucrat::GradeTooLowException();
    _grade ++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{return ("Grade Too High Exception.");}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{return ("Grade Too Low Exception.");}

std::ostream& operator<<(std::ostream &flux, Bureaucrat const &bureaucrat)
{
    flux << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (flux);
}
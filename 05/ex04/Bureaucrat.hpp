#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
    public:
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(Bureaucrat const &);
        Bureaucrat& operator=(Bureaucrat const &);
        ~Bureaucrat();
        
        std::string const   &getName() const;
        int                 getGrade() const;
        void                incrementGrade();
        void                decrementGrade();
        void                signForm(Form  &) const;
        
        void                executeForm(Form const &form) const;
        
        class GradeTooHighException : public std::exception
        {virtual const char *what() const throw();};
        class GradeTooLowException : public std::exception
        {virtual const char *what() const throw();};
    
    private:
        Bureaucrat();
        std::string const       _name;
        int                     _grade;
};

std::ostream& operator<<(std::ostream &flux, Bureaucrat const &bureaucrat);

#endif
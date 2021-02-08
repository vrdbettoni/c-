#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
class Form;
#include "Bureaucrat.hpp"

class Form
{
    public:
        Form(const std::string& name, const int signature, const int execution);
        Form(Form const &);
        Form& operator=(Form const &);
        ~Form();

        std::string const   &getName() const;
        int                 getGradeSignature() const;
        int                 getGradeExecution() const;
        bool                isSigned() const;
        void                beSigned(Bureaucrat const &);

        class GradeTooHighException : public std::exception
        {virtual const char *what() const throw();};

        class GradeTooLowException : public std::exception
        {virtual const char *what() const throw();};

        class GradeTooLowExceptionForSignature : public std::exception
        {virtual const char *what() const throw();};

    private:
        Form();
        const std::string&      _nameForm;
        const int               _gradeSignature;
        const int               _gradeExecution;
        bool                    _isSigned;
};

std::ostream& operator<<(std::ostream &flux, Form const &form);

#endif
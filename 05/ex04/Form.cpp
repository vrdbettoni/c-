#include "Form.hpp"

Form::Form(const std::string &name, const int signature , const int execution) : _nameForm(name), _gradeSignature(signature), _gradeExecution(execution), _isSigned(false)
{
    if (_gradeSignature > 150 || _gradeExecution > 150)
        throw::Form::GradeTooLowException();
    if (_gradeSignature < 1 || _gradeExecution < 1)
        throw::Form::GradeTooHighException();
}

Form::Form(Form const &other) : _nameForm(other._nameForm), _gradeSignature(other._gradeSignature), _gradeExecution(other._gradeExecution), _isSigned(other._isSigned) 
{
    if (_gradeSignature > 150 || _gradeExecution > 150)
        throw::Form::GradeTooLowException();
    if (_gradeSignature < 1 || _gradeExecution < 1)
        throw::Form::GradeTooHighException();
}

Form& Form::operator=(Form const &other)
{
    if (this != &other)
        _isSigned = other._isSigned;
    return (*this);
}

Form::~Form(){}

std::string const &Form::getName() const {return (_nameForm);}

int Form::getGradeSignature() const {return (_gradeSignature);}

int Form::getGradeExecution() const {return (_gradeExecution);}

bool Form::isSigned() const {return(_isSigned);}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    std::cout << bureaucrat.getName() << " try to sign " << getName() << std::endl;
    if (bureaucrat.getGrade() > _gradeSignature)
        throw::Form::GradeTooLowExceptionForSignature();
    _isSigned = true;
    std::cout << std::boolalpha << "[" << getName() << "] signed : " << isSigned() << " - Grade for signature : " << getGradeSignature() << " - Grade for Execution : " << getGradeExecution() << std::endl;
}

void Form::execute(Bureaucrat const &executor) const
{
    if (!_isSigned)
        throw::Form::ExecutionNeedSignature();
    if (executor.getGrade() > _gradeExecution)
        throw::Form::GradeTooLowExceptionForExecution();
    actionOnTarget();
}

const char* Form::GradeTooHighException::what() const throw()
{return ("Grade Too High Exception.");}

const char* Form::GradeTooLowException::what() const throw()
{return ("Grade Too Low Exception.");}

const char* Form::GradeTooLowExceptionForSignature::what() const throw()
{return ("Grade Too Low Exception For Signature.");}

const char* Form::ExecutionNeedSignature::what() const throw()
{return ("Execution Need Signature.");}

const char* Form::GradeTooLowExceptionForExecution::what() const throw()
{return ("Grade Too Low Exception For Execution.");}

std::ostream& operator<<(std::ostream &flux, Form const &form)
{
    flux << std::boolalpha << "[" << form.getName() << "] signed : " << form.isSigned() << " - Grade for signature : " << form.getGradeSignature() << " - Grade for Execution : " << form.getGradeExecution() << std::endl;
    return(flux); 
}
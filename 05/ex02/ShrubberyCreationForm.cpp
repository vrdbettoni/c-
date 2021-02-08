#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
    : Form("ShrubberyCreationForm", 145, 137), _target(other._target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    if (this != &other)
        _target = other._target;
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::actionOnTarget() const
{
    std::cout << "tree" << std::endl;
}

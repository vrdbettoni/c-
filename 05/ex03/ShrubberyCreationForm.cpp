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
    std::string fileName(_target);
    std::string tree = "             ,@@@@@@@,\n    ,,,.   ,@@@@@@/@@,  .oo8888o.\n ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n`&%\\ ` /%&'    |.|        \\ '|8'\n    |o|        | |         | |\n    |.|        | |         | |\n \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";
    fileName.append("_shruberry");
    std::ofstream file(fileName, std::ios_base::out);
    file << tree;
}

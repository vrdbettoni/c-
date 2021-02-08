#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
    : Form("RobotomyRequestForm", 72, 45), _target(other._target)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if (this != &other)
        _target = other._target;
    return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::actionOnTarget() const
{
    std::cout << "* BRRRRRRRRRRRRRRRRR *" << std::endl;
    std::cout << _target << " was robotomizee" << std::endl;
}
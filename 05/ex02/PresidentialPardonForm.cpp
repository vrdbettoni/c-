#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : Form("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
    : Form("PresidentialPardonForm", 25, 5), _target(other._target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    if (this != &other)
        _target = other._target;
    return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::actionOnTarget() const
{
    std::cout << _target << " was pardonned by Zafod Beeblebrox" << std::endl;
}
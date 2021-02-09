#ifndef PRESIDENTIALPARDONFROM_HPP
# define PRESIDENTIALPARDONFROM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(PresidentialPardonForm const &);
        PresidentialPardonForm& operator=(PresidentialPardonForm const &);
        ~PresidentialPardonForm();

        void actionOnTarget() const;

    private:
        PresidentialPardonForm();
        std::string _target;
};

#endif
#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);
        ~ShrubberyCreationForm();

        void actionOnTarget() const;

    private:
        ShrubberyCreationForm();
        std::string _target;
};

#endif
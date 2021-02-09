#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(RobotomyRequestForm const &);
        RobotomyRequestForm& operator=(RobotomyRequestForm const &);
        ~RobotomyRequestForm();

        void actionOnTarget() const;

    private:
        RobotomyRequestForm();
        std::string _target;
};

#endif
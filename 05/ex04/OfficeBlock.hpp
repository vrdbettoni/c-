#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include "Intern.hpp"
#include "Form.hpp"

#include <iostream>

class Officeblock
{
    public:
        Officeblock();
        Officeblock(Intern const &intern, Bureaucrat const &signer, Bureaucrat const &executer);

        void setInter(Intern const &intern);
        void setSigner(Bureaucrat const &signer);
        void setExecuter(Bureaucrat const &executer);
        void doBureaucracy(std::string const formName, std::string const target);

    private:
        Intern const      *_intern;
        Bureaucrat const  *_signer;
        Bureaucrat const  *_executer;
};

#endif
#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include "Intern.hpp"
#include "Form.hpp"

#include <iostream>

class Officeblock
{
    public:
        Officeblock();
        Officeblock(Intern *intern, Bureaucrat *signer, Bureaucrat *executer);
        ~Officeblock();

        void setInter(Intern *intern);
        void setSigner(Bureaucrat *signer);
        void setExecuter(Bureaucrat *executer);
        void doBureaucracy(const std::string &formName, const std::string &target);

    private:
        const Intern      *_intern;
        const Bureaucrat  *_signer;
        const Bureaucrat  *_executer;
};

#endif
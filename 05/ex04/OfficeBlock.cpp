#include "OfficeBlock.hpp"

Officeblock::Officeblock() : _intern(0), _signer(0), _executer(0)
{}

Officeblock::Officeblock(Intern const &intern, Bureaucrat const &signer, Bureaucrat const &executer)
    : _intern(&intern), _signer(&signer), _executer(&executer)
{}

Officeblock::~Officeblock()
{}

void Officeblock::setInter(Intern const &intern)
{
    if (_intern)
        std::cout << "Old intern was fire" << std::endl;
    _intern = &intern;
}

void Officeblock::setSigner(Bureaucrat const &signer)
{
    if (_signer)
        std::cout << "Old signer was fire" << std::endl;
    _signer = &signer;
}

void Officeblock::setExecuter(Bureaucrat const &executer)
{
    if (_executer)
        std::cout << "Old signer was fire" << std::endl;
    _executer = &executer;
}

void Officeblock::doBureaucracy(std::string const formName, std::string const target)
{
    Form* form;
    if (!_intern || !_signer || !_executer){
        std::cout << "Need a complete team" << std::endl;
        return ;
    }
    form = _intern->makeForm(formName, target);
}
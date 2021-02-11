#include "OfficeBlock.hpp"

Officeblock::Officeblock() : _intern(0), _signer(0), _executer(0)
{}

Officeblock::Officeblock(Intern *intern, Bureaucrat *signer, Bureaucrat *executer)
    : _intern(intern), _signer(signer), _executer(executer)
{}

Officeblock::~Officeblock()
{}

void Officeblock::setInter(Intern *intern)
{
    if (_intern)
        std::cout << "Old intern was fire" << std::endl;
    _intern = intern;
}

void Officeblock::setSigner(Bureaucrat *signer)
{
    if (_signer)
        std::cout << "Old signer was fire" << std::endl;
    _signer = signer;
}

void Officeblock::setExecuter(Bureaucrat *executer)
{
    if (_executer)
        std::cout << "Old executer was fire" << std::endl;
    _executer = executer;
}

void Officeblock::doBureaucracy(const std::string &formName, std::string const &target)
{
    if (!_intern || !_signer || !_executer){
        std::cout << "Need a complete team" << std::endl;
        return ;
    }
    try{
        Form *form = this->_intern->makeForm(formName, target);
        _signer->signForm(*form);
        _executer->executeForm(*form);
    }
    catch(std::exception const &e){
        std::cout << e.what() << std::endl;
    }
}
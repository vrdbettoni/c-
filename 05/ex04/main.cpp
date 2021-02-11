#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdlib.h>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
    Bureaucrat  boss("boss", 1);
    Bureaucrat  chief("chef", 50);
    Bureaucrat  worker("worker", 130);  
    std::cout << "Create team A : " << std::endl;
    Bureaucrat teamA[2] = {chief, worker};
    std::cout << teamA[0] << teamA[1] << std::endl;
    std::cout << "Create team B : " << std::endl;
    Bureaucrat teamB[2] = {boss, boss};
    std::cout << teamB[0] << teamB[1] << std::endl;
    Intern intern;
    std::cout << "The intern can't introduce himself." << std::endl;
    std::cout << "Office block create" << std::endl;
    Officeblock d;

    std::cout << "\n\nTeamA" << std::endl;
    d.setSigner(&(teamA[0]));
    d.setExecuter(&(teamA[1]));
    d.setInter(&intern);
    d.doBureaucracy("ShrubberyCreationForm", "bob's garden");
    d.doBureaucracy("RobotomyRequestForm", "bob");
    d.doBureaucracy("PresidentialPardonForm", "bob");

   std::cout << "\n\nTeamB arrive in the office" << std::endl;
    d.setSigner(&(teamB[0]));
    d.setExecuter(&(teamB[1]));
    d.setInter(&intern);
    d.doBureaucracy("ShrubberyCreationForm", "bob's garden");
    d.doBureaucracy("RobotomyRequestForm", "bob");
    d.doBureaucracy("PresidentialPardonForm", "bob");
}
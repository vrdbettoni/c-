#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const &);
        Sorcerer& operator=(Sorcerer const &);
        ~Sorcerer();

        void introduce();
        const std::string getName() const;
        const std::string getTitle() const;
        void polymorph(Victim const &);

    private:
        Sorcerer();
        std::string     _name;
        std::string     _title;
};

std::ostream& operator<<(std::ostream &flux, Sorcerer const& sorcerer);

#endif

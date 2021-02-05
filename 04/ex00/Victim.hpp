#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
    public:
        Victim(std::string name);
        Victim(Victim const &);
        Victim& operator=(Victim const &);
        ~Victim();

        void introduce();
        virtual void getPolymorphed() const;
        const std::string getName() const;
    

    private:
        Victim();
        std::string     _name;
};

std::ostream& operator<<(std::ostream &flux, Victim const& sorcerer);

#endif

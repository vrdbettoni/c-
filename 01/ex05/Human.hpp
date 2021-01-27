#include "Brain.hpp"

class   Human
{
    public:
        Human();

        const Brain &getBrain();
        std::string identify();
    
    private:
        const Brain   _brain;
};
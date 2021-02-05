#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
    public:
        Enemy(int hp, std::string const &type);
        Enemy(const Enemy&);
        Enemy& operator=(const Enemy&);
        virtual ~Enemy();

        std::string  getType() const;
        int          getHP() const;
        virtual void takeDamage(int);

    protected:
        Enemy();
        int         _hitPoints;
        std::string _type;

};

#endif
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hitPoints(hp), _type(type){}

Enemy::Enemy(const Enemy& other){(*this = other);}

Enemy& Enemy::operator=(const Enemy& other)
{
    _hitPoints = other._hitPoints;
    _type = other._type;
    return (*this);
}

Enemy::~Enemy(){}

std::string Enemy::getType() const {return (_type);}
int Enemy::getHP() const {return (_hitPoints);}

void Enemy::takeDamage(int damage)
{_hitPoints = _hitPoints - damage < 0 ? 0 : _hitPoints - damage;}
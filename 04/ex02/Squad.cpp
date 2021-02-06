#include "Squad.hpp"

Squad::Squad() : _units(0),_count(0){}

Squad::Squad(Squad const &other){*this = other;}

Squad& Squad::operator=(Squad const &other)
{
    if (_units){
        for (int i = 0; i < _count; i++)
            delete _units[i];
        delete _units;
        _units = 0;
        _count = 0;
    }
    for (int i = 0; i < other.getCount(); i++)
        push(other.getUnit(i)->clone());
    return (*this);
}

Squad::~Squad()
{
    if (_units){
        for (int i = 0; i < _count; i++)
            delete _units[i];
        delete _units;
    }
}

int Squad::getCount() const {return (_count);}

ISpaceMarine* Squad::getUnit(int unit_index) const
{
    if (!_count || unit_index < 0 || unit_index >= _count)
        return (0);
    return (_units[unit_index]);
}

int Squad::push(ISpaceMarine *unit)
{
    if (!unit)
        return (_count);
    if (!_units){
        _units = new ISpaceMarine*[1];
        _units[0] = unit;
        _count++;
    }
    else{
        for (int i = 0; i < _count; i++){
            if (_units[i] == unit)
                return (_count);
        }
        ISpaceMarine **newone = new ISpaceMarine*[_count + 1];
        for (int i = 0; i < _count; i++)
            newone[i] = _units[i];
        delete[] _units;
        _units = newone;
        _units[_count] = unit->clone();
        _count++;
    }
    return (_count);
}

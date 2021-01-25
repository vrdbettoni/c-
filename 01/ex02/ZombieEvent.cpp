/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 20:04:41 by vroth-di          #+#    #+#             */
/*   Updated: 2020/06/27 03:08:49 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void    ZombieEvent::setZombieType(std::string const &type)
{
    this->m_type = type;
}

Zombie  *ZombieEvent::newZombie(std::string const &name)
{
    return (new Zombie(this->m_type, name));
}

Zombie  *ZombieEvent::randomChump(int j)
{
    Zombie *zombie;

    zombie = new Zombie(Zombie::getName(j), this->m_type);
    zombie->advert();
    return(zombie);
}


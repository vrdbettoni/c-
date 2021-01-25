/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 20:04:45 by vroth-di          #+#    #+#             */
/*   Updated: 2020/06/27 03:06:47 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();

        void    setZombieType(std::string const &type);
        void    announce();
        Zombie  *newZombie(std::string const &name);
        Zombie  *randomChump(int j);

    private:
        std::string     m_type;
};

#endif
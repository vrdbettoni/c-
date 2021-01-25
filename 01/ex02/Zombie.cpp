/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 19:28:54 by vroth-di          #+#    #+#             */
/*   Updated: 2020/06/27 03:13:45 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

Zombie::~Zombie()
{
}

void    Zombie::advert()
{
    std::cout << "<" << this->m_name << " (" << this->m_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

std::string Zombie::getName(int j)
{
    char    allLetters[56]{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char    b_name[11]{0};

    srand(time(NULL) + j);
    for (int i = 0; i < 10; i++)
        b_name[i] = allLetters[rand()%(52 - 0) + 0];
    b_name[10] = 0;
    std::string name = b_name;
    return(name);
}
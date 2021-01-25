/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:35:40 by vroth-di          #+#    #+#             */
/*   Updated: 2020/06/26 15:11:37 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : m_name(name)
{
    std::cout << "Your poney is being build" << std::endl; 
}

Pony::~Pony()
{
    std::cout << "Your poney is being deleted" << std::endl;
}

void    Pony::galoping()
{
    std::cout << this->m_name << " : Yeah, i'm galopping" << std::endl; 
}

void    Pony::neighing()
{
    std::cout << this->m_name << " : HUUUUUHHUUUUHUHUHUUU" << std::endl;
}
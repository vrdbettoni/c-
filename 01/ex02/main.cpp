/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 19:29:42 by vroth-di          #+#    #+#             */
/*   Updated: 2020/06/27 03:13:05 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#define NB_ZOMBIES 3 

int     main()
{
    ZombieEvent blue;
    ZombieEvent red;
    Zombie *teamBlue[NB_ZOMBIES];
    Zombie *teamRed[NB_ZOMBIES];
    
    std::cout << NB_ZOMBIES * 2 << " Zombies are comming" << std::endl;
    blue.setZombieType("blue");
    red.setZombieType("red");
    for (int i = 0; i < NB_ZOMBIES; i++)
    {
        teamBlue[i] = blue.randomChump(i);
        teamRed[i] = red.randomChump(i + 5);
    }
    for (int i = 0; i < NB_ZOMBIES; i++)
    {
        delete teamBlue[i];
        delete teamRed[i];
    }
    std::cout << "Well, they run after a hen .." << std::endl;

}
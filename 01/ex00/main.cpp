/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:08:20 by vroth-di          #+#    #+#             */
/*   Updated: 2021/02/04 09:16:16 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    a_pony_on_the_stack()
{
    Pony onStack("Roger");

    onStack.galoping();
    onStack.neighing();
}

void    a_pony_on_the_heap()
{
    Pony *onHeap = new Pony("Patrick");

    onHeap->galoping();
    onHeap->neighing();
    delete onHeap;
}

int     main()
{
    std::cout << "A pony on the stack !" << std::endl;
    a_pony_on_the_stack();
    std::cout << "\nA pony on the heap !" << std::endl;
    a_pony_on_the_heap();
    
}
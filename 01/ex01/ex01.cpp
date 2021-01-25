/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:24:44 by vroth-di          #+#    #+#             */
/*   Updated: 2020/06/26 15:26:29 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    memoryLeak()
{
    std::string*    panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}
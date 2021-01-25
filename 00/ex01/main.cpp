/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 04:54:48 by vroth-di          #+#    #+#             */
/*   Updated: 2020/06/15 18:57:59 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annu.hpp"
#include "contact.hpp"

int	main(void)
{
	Annuaire annuaire;
	bool run;
	std::string command;

	annuaire.show_header();
	run = true;
	while (run)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			annuaire.add_contact();
		else if (command == "SEARCH")
			annuaire.search_contact();
		else if (command == "EXIT")
			run = false;
	}
	return (0);
}
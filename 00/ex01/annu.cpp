/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annu.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 19:16:40 by vroth-di          #+#    #+#             */
/*   Updated: 2020/06/26 12:58:14 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annu.hpp"

Annuaire::Annuaire() : amount(0)
{
}

Annuaire::~Annuaire()
{
}

void Annuaire::show_header(void)
{
	std::cout << "\n\n         - My_Awesome_Phonebook -" << std::endl;
	std::cout << "- Enter your command [ADD, SEARCH or EXIT] -\n" << std::endl;
}

void Annuaire::add_contact(void)
{
	if (amount == 8)
		std::cout << "The directory is full !" << std::endl;
	else if (contacts[amount].set_informations(amount + 1))
		amount++;
}

void Annuaire::show_search_header(void)
{
	std::cout << "\n|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < amount; i++)
		contacts[i].display_header();
	std::cout << "|-------------------------------------------|\n" << std::endl;
}

void Annuaire::search_contact(void)
{
	int	index;

	if (amount == 0)
		std::cout << "You have to add a contact before searching !" << std::endl;
	else
	{
		show_search_header();
		std::cout << "Enter Index to display Informations or 0 to Exit\n~";
		while (!(std::cin >> index) || (index < 0 || index > amount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid Index\n~";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->contacts[index - 1].display();
	}
}
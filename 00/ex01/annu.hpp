/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annu.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 19:16:33 by vroth-di          #+#    #+#             */
/*   Updated: 2021/02/01 19:40:25 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNU_HPP
# define ANNU_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"
# include <limits>

class Annuaire
{
	private:
		Contact	contacts[8];
		int		amount;
		
	public:
		Annuaire();
		~Annuaire();

		void	show_header(void);
		void	add_contact(void);
		void	search_contact(void);
		void	show_search_header(void);
};

#endif
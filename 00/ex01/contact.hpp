/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 19:16:46 by vroth-di          #+#    #+#             */
/*   Updated: 2021/02/01 19:41:21 by vroth-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		int					index;
		static std::string	fields_name[11];
		std::string			informations[11];

		enum Field {
			FirstName,
			LastName,
			Nickname,
			Login,
			Address,
			Email,
			Phone,
			Birthday,
			FavoriteMeal,
			UnderwearColor,
			Secret
		};
	public:

		Contact();
		~Contact();
		bool	set_informations(int index);
		void	display_header(void);
		void	display(void);
};

#endif
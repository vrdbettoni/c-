# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/12 17:23:57 by vroth-di          #+#    #+#              #
#    Updated: 2020/11/26 15:28:42 by vroth-di         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= My_Awesome_Phonebook

CC			= clang++ -std=c++98
CFLAGS		= -Wall -Wextra -Werror

OBJ			= $(SRCS:.cpp=.o)
SRCS		= main.cpp		annu.cpp\
			  contact.cpp

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o My_Awesome_Phonebook $(OBJ)

clean:		
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
			
.PHONY:		all clean fclean re
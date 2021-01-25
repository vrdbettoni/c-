# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vroth-di <vroth-di@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/12 16:41:32 by vroth-di          #+#    #+#              #
#    Updated: 2020/11/26 15:28:29 by vroth-di         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

CC			= clang++ -std=c++98
CFLAGS		= -Wall -Wextra -Werror

OBJ			= $(SRCS:.cpp=.o)
SRCS		= megaphone.cpp

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o megaphone $(OBJ)

clean:		
			rm -rf *.o 

fclean:		clean
			rm -rf megaphone

re:			fclean all
			
.PHONY:		all clean fclean re
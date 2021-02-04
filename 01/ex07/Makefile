SRCS	= replace.cpp
OBJS	= $(SRCS:.cpp=.o)

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

NAME	= replace

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all:	$(NAME)

$(NAME):$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
		@echo "\x1b[32;01mreplace created \x1b[0m"

%.o: 		%.c $(HEADER)
			@$(CC) $(CFLAGS) $(LFLAGS) -c $< -o $@

clean:
			@echo "\x1b[33;01m.o are deleted\x1b[0m"
			@rm -rf $(OBJS)

fclean:		clean
			@rm -rf $(NAME)
			@echo "\x1b[31;01mreplace is deleted\x1b[0m"

re:			fclean all

.PHONY:		all fclean clean re
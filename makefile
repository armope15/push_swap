#Makefile

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = main.c parse.c utils.c 

OBJ = $(SRC:.c=.0)

all:$NAME

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
# Variables

NAME = brain

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp

# Rules

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

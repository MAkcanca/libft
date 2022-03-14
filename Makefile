# Libft, 5 Feb 2022, MAkcanca

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SOURCE = $(wildcard ft_*.c) # TODO: Replace this with list of sources later
OBJ = $(SOURCE:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re main
main: .main.c $(NAME)
	$(CC) $(FLAGS) .main.c $(NAME) -o main
	./main

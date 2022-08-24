NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

SRC = main.c ft_display_file.c ft_putstr.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(REMOVE) *.o

fclean: clean
		$(REMOVE) $(NAME)

re: fclean all
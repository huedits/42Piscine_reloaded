NAME = libft.a

PATH_SRCS = ./srcs/
PATH_INCL = ./includes/
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

SRCS= $(addprefix $(PATH_SRCS),\
			ft_putchar.c\
			ft_putstr.c\
			ft_strcmp.c\
			ft_strlen.c\
			ft_swap.c)

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
$(OBJS):
	gcc $(FLAGS) -I $(PATH_INCL) -c $(SRCS)
clean:
	$(REMOVE) *.o
fclean: clean
		$(REMOVE) $(NAME)
re: fclean all
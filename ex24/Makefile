NAME = libft.a

S_DIR = srcs
I_DIR = includes

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ${I_DIR}

SRC_FILES = ft_putchar.c ft_putstr ft_strcmp.c ft_strlen.c ft_swap.c
SRCS = $(addprefix $(S_DIR)/, $(SRC_FILES))

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	em -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

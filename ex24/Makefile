# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/13 11:59:24 by mide-fre          #+#    #+#              #
#    Updated: 2026/04/13 11:59:27 by mide-fre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

S_DIR = srcs
I_DIR = includes

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(I_DIR)

SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
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
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

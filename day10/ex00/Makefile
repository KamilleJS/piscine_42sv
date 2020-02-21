# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 15:41:08 by ikuklina          #+#    #+#              #
#    Updated: 2019/11/05 12:50:10 by ikuklina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c

OFILES = ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

HEADERS = includes/ft.h 

all: $(NAME)

$(NAME):
	gcc -c -w -w -w $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

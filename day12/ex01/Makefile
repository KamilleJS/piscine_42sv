# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 21:21:50 by ikuklina          #+#    #+#              #
#    Updated: 2019/11/07 21:24:28 by ikuklina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
FLAG = -w -w -w
SRCS = srcs/*.c
INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRCS) -o $(NAME) -I $(INCLUDES)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

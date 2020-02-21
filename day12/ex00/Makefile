# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 19:13:41 by ikuklina          #+#    #+#              #
#    Updated: 2019/11/07 20:33:12 by ikuklina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -w -w -w
SRCS = srcs/*.c
INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRCS) -o $(NAME) -I $(INCLUDES)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean re

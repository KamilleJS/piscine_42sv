# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 13:31:42 by ikuklina          #+#    #+#              #
#    Updated: 2019/10/30 17:26:19 by ikuklina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bush

gcc -c *.c
ar rs libft.a *.o
ranlib libft.a
rm *.o
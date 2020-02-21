/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:03:47 by ikuklina          #+#    #+#             */
/*   Updated: 2019/11/07 20:43:03 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mylib.h"

void	ft_display_file(char *filename)
{
	int		ret;
	int		fdesc;
	char	buf[BUF_SIZE];

	fdesc = open(filename, O_RDONLY);
	while ((ret = read(fdesc, buf, BUF_SIZE)))
		write(1, buf, ret);
	close(fdesc);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file(av[1]);
	return (0);
}

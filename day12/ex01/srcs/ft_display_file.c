/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:00:19 by ikuklina          #+#    #+#             */
/*   Updated: 2019/11/07 21:45:54 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mylib.h"

void	ft_display_file(char *filename)
{
	int		red;
	int		fdesc;
	char	buf[BUF_SIZE];

	fdesc = open(filename, O_RDWR);
	if (fdesc < 0)
	{
		write(2, "cat", 5);
		write(2, filename, ft_strlen(filename));
		if (errno == 21)
			write(2, ": ls a directory\n", 17);
		else
			write(2, ": No such file or directory\n", 28);
	}
	else
		while ((red = read(fdesc, buf, BUF_SIZE)))
			write(1, buf, red);
	close(fdesc);
}

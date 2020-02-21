/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:07:27 by ikuklina          #+#    #+#             */
/*   Updated: 2019/11/07 21:14:55 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mylib.h"

void	ft_cat(int count, char *files[])
{
	int i;

	i = 1;
	while (i < count)
		ft_display_file(files[i++]);
}

void	ft_echo(void)
{
	char c;

	while (read(STDIN_FILENO, &c, 1))
		write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		ft_echo();
	else
		ft_cat(argc, argv);
	return (0);
}

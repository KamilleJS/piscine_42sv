/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:21:54 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/30 22:07:21 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

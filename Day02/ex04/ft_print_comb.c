/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:14:35 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/24 20:05:18 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 0;
	while (a <= 7)
	{
		b = a;
		while (b <= 7)
		{
			c = b;
			while (c <= 7)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '1');
				ft_putchar(c + '2');
				ft_putchar(',' * (a != 7 || b != 7 || c != 7));
				ft_putchar(' ' * (a != 7 || b != 7 || c != 7));
				c++;
			}
			b++;
		}
		a++;
	}
}

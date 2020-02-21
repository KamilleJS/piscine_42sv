/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 23:03:35 by ikuklina          #+#    #+#             */
/*   Updated: 2019/11/08 16:09:52 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchar('-');
		lnb = lnb * -1;
	}
	if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
		ft_putnbr(lnb % 10);
	}
	else
		ft_putchar(lnb + '0');
}

int		ft_atoi(char *str)
{
	int			i;
	int			min;
	long int	nmb;

	i = 0;
	min = 1;
	nmb = 0;
	if (!str[i])
		return (0);
	while (str[i] < 33)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			min = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nmb = (nmb * 10) + str[i++] - 48;
	nmb = nmb * min;
	if (nmb > 2147483647)
		return (2147483647);
	if (nmb < -2147483648)
		return (-2147483648);
	return (nmb);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (av[2][0] == '-')
		ft_putnbr(ft_atoi(av[1]) - ft_atoi(av[3]));
	else if (av[2][0] == '+')
		ft_putnbr(ft_atoi(av[1]) + ft_atoi(av[3]));
	else if (av[2][0] == '*')
		ft_putnbr(ft_atoi(av[1]) * ft_atoi(av[3]));
	else if (av[2][0] == '/')
	{
		if (av[3][0] == '0')
			return (write(1, "Stop : division by zero\n", 24));
		ft_putnbr(ft_atoi(av[1]) / ft_atoi(av[3]));
	}
	else if (av[2][0] == '%')
	{
		if (av[3][0] == '0')
			return (write(1, "Stop : modulo by zero\n", 22));
		ft_putnbr(ft_atoi(av[1]) % ft_atoi(av[3]));
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
}

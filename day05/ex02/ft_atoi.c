/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:36:01 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/29 23:38:31 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
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

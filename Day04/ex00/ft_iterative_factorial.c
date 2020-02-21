/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 01:26:23 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/26 15:21:04 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int n;

	n = 1;
	if (nb >= 0 && nb <= 12)
	{
		if (nb == 0)
			return (1);
		while (nb != 1)
		{
			n *= nb;
			nb--;
		}
		return (n);
	}
	return (0);
}

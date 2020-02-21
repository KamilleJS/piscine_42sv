/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:47:27 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/26 17:07:12 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb <= 12)
	{
		if (nb == 0 && nb == 1)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	return (1);
}

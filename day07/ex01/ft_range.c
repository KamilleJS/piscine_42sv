/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 22:27:45 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/31 17:00:38 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i++] = min;
		min++;
	}
	return (tab);
}

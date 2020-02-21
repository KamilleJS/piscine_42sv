/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:12:34 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/31 16:26:30 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size] != '\0')
		size++;
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:33:05 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/31 22:15:16 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	char	*ptr;
	int		i;

	str = NULL;
	ptr = NULL;
	if (argc > 1)
	{
		str = (char*)malloc(sizeof(argv));
		ptr = str;
		i = 1;
		while (i < argc)
		{
			if (i > 1)
				*str++ = '\n';
			while (*argv[i] != '\0')
				*str++ = *argv[i]++;
			i++;
		}
		*str = '\0';
	}
	return (ptr);
}

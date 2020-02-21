/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:37:55 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/31 19:14:52 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_words(char *str)
{
	int i;
	int word;
	int count;

	i = 0;
	word = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int		ft_sizeword(char *str, int i)
{
	int size;

	size = 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		count;
	int		symb;
	int		tot;

	i = 0;
	count = 0;
	tot = ft_words(str);
	words = (char**)malloc(sizeof(char*) * tot + 1);
	while (str[i] != '\0' && count < tot)
	{
		symb = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		words[count] = (char*)malloc(sizeof(char) * ft_sizeword(str, i) + 1);
		while (str[i] != ' ' && str[i] != '\n'
				&& str[i] != '\t' && str[i] != '\0')
			words[count][symb++] = str[i++];
		words[count][symb++] = '\0';
		count++;
	}
	words[count] = 0;
	return (words);
}

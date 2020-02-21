/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:55:44 by ikuklina          #+#    #+#             */
/*   Updated: 2019/11/06 18:54:56 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *newel;

	if (*begin_list)
	{
		newel = *begin_list;
		while (newel->next)
			newel = newel->next;
		newel->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

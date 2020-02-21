/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:13:42 by ikuklina          #+#    #+#             */
/*   Updated: 2019/11/06 18:23:36 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *newel;

	if (!begin_list)
		return (0);
	newel = begin_list;
	while (newel->next)
		newel = newel->next;
	return (newel);
}

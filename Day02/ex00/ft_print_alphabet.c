/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:10:04 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/24 10:44:34 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}

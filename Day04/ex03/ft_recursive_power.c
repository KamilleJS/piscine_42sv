/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:32:27 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/26 19:38:42 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return(0);
 	else if ( power == 0)
		return(1);
	else if (power == 1)
		return (nb);
	else
		return (power = nb * ft_recursive_power(nb, power-1));
}

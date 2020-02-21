/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:46:08 by ikuklina          #+#    #+#             */
/*   Updated: 2019/10/26 20:35:53 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
    	return(-1);
	else if(index == 0)
    	return(0);
	else if(index == 1)
    	return(1);
	else 
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

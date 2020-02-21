/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:02:03 by ikuklina          #+#    #+#             */
/*   Updated: 2019/11/01 13:55:49 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# define TRUE 1

# define FALSE 0

# define EVEN(x) x % 2 == 0

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0

# include <unistd.h>

typedef	int	t_bool;

#endif

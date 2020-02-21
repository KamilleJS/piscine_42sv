/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:18:04 by ikuklina          #+#    #+#             */
/*   Updated: 2019/11/07 21:21:26 by ikuklina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_H
# define MYLIB_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# define BUF_SIZE 4096

void	ft_cat(int count, char *files[]);
void	ft_display_files(char *filename);
int		ft_strlen(char *str);
void	ft_echo(void);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <mait-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:48:49 by mait-you          #+#    #+#             */
/*   Updated: 2024/11/08 19:28:28 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd == -1)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}

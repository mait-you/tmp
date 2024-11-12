/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <mait-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:28:19 by mait-you          #+#    #+#             */
/*   Updated: 2024/11/12 11:53:45 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((*ss1 || *ss2) && n--)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		ss1++;
		ss2++;
	}
	return (0);
}

#include <libc.h>
int main()
{
	char *s1 = "1234";
	char *s2 = "123";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("===========\n");
	printf("%d\n", strncmp(s1, s2, 4));
	printf("===========\n");

	printf("%d\n", ft_strncmp("1234", "123", 4));
	printf("===========\n");
	printf("%d\n", strncmp("1234", "123", 4));
	printf("===========\n");
}
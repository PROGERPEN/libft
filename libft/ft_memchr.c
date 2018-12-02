/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhrazz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 17:42:28 by fkhrazz           #+#    #+#             */
/*   Updated: 2018/11/26 17:07:22 by fkhrazz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *src;

	src = (char *)s;
	while (*src && n--)
	{
		if (*src == c)
			return (src);
		src++;
	}
	if (c == '\0')
		return (src);
	return (NULL);
}

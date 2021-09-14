/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:31:05 by mbucci            #+#    #+#             */
/*   Updated: 2021/09/12 15:59:48 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*ptr;

	i = 0;
	if (n == 0)
		return (NULL);
	ptr = (char *)s;
	c = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((char *)&ptr[i]);
		i++;
	}
	return (NULL);
}

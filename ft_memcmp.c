/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:16:11 by mbucci            #+#    #+#             */
/*   Updated: 2021/09/12 16:13:39 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	int			num;
	const char	*p1;
	const char	*p2;

	if (n == 0)
		return (0);
	i = 0;
	p1 = s1;
	p2 = s2;
	while (p1[i] == p2[i] && i < n - 1)
		i++;
	num = (unsigned char)p1[i] - (unsigned char)p2[i];
	if (num > 0)
		return (1);
	else if (num < 0)
		return (-1);
	else
		return (0);
}

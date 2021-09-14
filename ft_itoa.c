/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:25:15 by mbucci            #+#    #+#             */
/*   Updated: 2021/09/15 00:06:17 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_int_len(int n)
{
	unsigned int	i;
	int				count;

	if (n <= 0)
	{
		i = -n;
		count = 1;
	}
	else
	{
		count = 0;
		i = n;
	}
	while (i > 0)
	{
		count++;
		i /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	i;
	int				count;

	if (n < 0)
		i = -n;
	else
		i = n;
	count = ft_get_int_len(n);
	str = (char *)malloc(count);
	str[count] = '\0';
	if (!str)
		return (NULL);
	while (count >= 0)
	{
		str[count - 1] = (i % 10) + 48;
		i /= 10;
		count--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

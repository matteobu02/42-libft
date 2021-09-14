/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:34:16 by mbucci            #+#    #+#             */
/*   Updated: 2021/09/02 13:45:29 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*ptr;
	size_t	i;
	size_t	bytnum;

	ptr = NULL;
	bytnum = size * count;
	ptr = (int *)malloc(bytnum);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < bytnum)
	{
		*(ptr + i) = 0;
		i++;
	}
	return (ptr);
}

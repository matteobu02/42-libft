/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:43:16 by mbucci            #+#    #+#             */
/*   Updated: 2021/10/21 23:46:12 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*obj;

	obj = malloc(sizeof(t_list));
	if (!obj)
		return (NULL);
	obj->content = content;
	obj->next = NULL;
	return (obj);
}

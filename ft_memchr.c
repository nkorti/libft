/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 07:55:15 by nkorti            #+#    #+#             */
/*   Updated: 2022/10/09 07:55:18 by nkorti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*st;

	i = 0;
	st = (char *)s;
	if (n == 0)
		return (NULL);
	while ((char)c != st[i] && i < n -1)
		i++;
	if ((char)c == st[i])
		return ((void *)&st[i]);
	return (NULL);
}

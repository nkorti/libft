/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:35:36 by nkorti            #+#    #+#             */
/*   Updated: 2022/10/22 23:38:36 by nkorti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*serc;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	serc = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dest[i] = serc[i];
		i++;
	}
	return (dest);
}

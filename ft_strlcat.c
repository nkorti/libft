/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:33:56 by nkorti            #+#    #+#             */
/*   Updated: 2022/10/22 23:45:40 by nkorti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	j = 0;
	s = ft_strlen(src);
	while (j < dstsize && dst[j] != '\0')
		j++;
	if (j == dstsize)
		return (j + ft_strlen(src));
	while (src[i] && (i + j + 1) < dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j < dstsize)
		dst[j + i] = '\0';
	return (j + s);
}

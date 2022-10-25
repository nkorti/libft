/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorti <nkorti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:42:40 by nkorti            #+#    #+#             */
/*   Updated: 2022/10/23 02:24:28 by nkorti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*bc;

	bc = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		bc[i] = c;
		i++;
	}
	return (b);
}

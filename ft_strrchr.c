/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:55:24 by nkorti            #+#    #+#             */
/*   Updated: 2022/10/09 02:55:28 by nkorti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
		len = ft_strlen(str);
	while (len >= 0)
	{
		if ((char)c == str[len])
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}

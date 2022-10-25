/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:54:46 by nkorti            #+#    #+#             */
/*   Updated: 2022/10/11 11:54:49 by nkorti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	int		chek;

	if (*needle && len == 0)
		return (0);
	if (needle[0] == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && needle_len <= len--)
	{
		chek = ft_strncmp((char *)haystack, (char *)needle, needle_len);
		if (*haystack == *needle && !chek)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

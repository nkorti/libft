/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:59:03 by nkorti            #+#    #+#             */
/*   Updated: 2022/10/17 01:59:06 by nkorti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*news;
	int		len;

	i = 0;
	len = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (*s1 == '\0' && *set)
		return (ft_substr("\0", 0, 1));
	if (!*set && !*s1)
		return (ft_substr("\0", 0, 1));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[len] && ft_strrchr(set, s1[len]))
		len--;
	news = ft_substr(s1, i, len - i + 1);
	if (!news)
		return (NULL);
	return (news);
}

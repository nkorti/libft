/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:34:40 by nkorti            #+#    #+#             */
/*   Updated: 2022/10/17 01:34:46 by nkorti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ns;
	int		i;
	int		size;

	size = 0;
	size = ft_strlen(s1);
	ns = malloc(sizeof(char) * (size + 1));
	if (!ns)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

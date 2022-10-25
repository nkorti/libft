/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:15:48 by nkorti            #+#    #+#             */
/*   Updated: 2022/10/18 11:15:55 by nkorti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
		else
			i++;
	}
	return (word);
}

static int	size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static	void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free (s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	int		cw;
	int		sw;
	char	**str;
	int		j;
	int		i;

	j = -1;
	i = 0;
	cw = count_word(s, c);
	str = (char **)malloc((cw + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (++j < cw)
	{
		while (s[i] == c)
			i++;
		sw = size_word(s, c, i);
		str[j] = ft_substr(s, i, sw);
		if (&ft_substr == NULL)
			ft_free(str);
		i += sw;
	}
	str[j] = 0;
	return (str);
}

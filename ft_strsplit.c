/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:48:08 by mdube             #+#    #+#             */
/*   Updated: 2019/06/12 17:53:50 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

static int		ft_words(const char *s, char c)
{
	unsigned int	i;
	int				ctr;

	i = 0;
	ctr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			ctr++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (ctr);
}

char	**ft_strsplit(const char *s, char c)
{
	/*char **str;
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	str = (char **)malloc(sizeof(char) * strlen(s) + 1);
	while (s[i])
	{
		if (isalpha(s[i]) == 0)
		{
			i++;
		}
		else
		{
			while (isalpha(s[i]) == 1)
			{
				str[j][k] = s[i];
				i++;
				k++;
			}
			str[j][k] = '\0';
			j++;
			k = 0;
		}
	}
	*str[j] = '\0';*/
	char		**tab;
	int			i;
	int			j;
	int			k;

	i = 0;
	k = 0;
	if (!(s))
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *)*(ft_words(s, c)) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			tab[k] = ft_strndup(s + j, i - j);
		}
	}
	tab[k] = NULL;
	return (tab);
}

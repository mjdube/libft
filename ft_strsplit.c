/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:48:08 by mdube             #+#    #+#             */
/*   Updated: 2019/06/13 12:24:06 by mdube            ###   ########.fr       */
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
		while (s[i] && s[i + 1] != c && s[i + 1] != '\0')
			i++;
	}
	return (ctr);
}

char	**ft_strsplit(const char *s, char c)
{
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 18:00:45 by mdube             #+#    #+#             */
/*   Updated: 2019/05/31 13:48:12 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int		ft_isspace(char c)
{
	int i;

	if (c == '\n' || c == '\v' || c  == '\f' || c == ' ' || c == '\r' || c == '\t')
		i = 1;
	else
		i = 0;
	return (i);
}

char 		*ft_strtrim(const char *s)
{
	char *new;
	int i;
	int j;
	int k;

	i = 0;
	if (!(new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (ft_isspace(s[i]) == 1)
		i++;
	k = 0;
	while (s[i])
	{
		new[k] = s[i];
		k++;
		i++;
	}
	while (ft_isspace(new[k - 1]) == 1)
	{
		k--;
	}
	new[k] = '\0';
	return (new);
}

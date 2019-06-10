/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 18:00:45 by mdube             #+#    #+#             */
/*   Updated: 2019/06/10 17:09:44 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_isspace(char c)
{
	if (c == '\n' || c == '\v' || c  == '\f' || c == ' ' || 
			c == '\r' || c == '\t')
		return (1);
	return (0);
}

char 		*ft_strtrim(const char *s)
{
	if (s)
	{
		char 	*new;
		int		i;
		int		k;

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
	return (0);
}

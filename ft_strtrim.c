/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 18:00:45 by mdube             #+#    #+#             */
/*   Updated: 2019/05/30 18:17:52 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char 		*ft_strtrim(const char *s)
{
	char *new;
	int i;

	i = 0;
	new = (char *)malloc(sizeof(char) * strlen(s) + 1);
	while (s[i])
	{
		if (ft_isspace(s[i]))
	}
}

int			ft_isspace(char c)
{
	int i;

	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		i = 1;
	else 
		i = 0;
	return (i);
}

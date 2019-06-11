/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 18:00:45 by mdube             #+#    #+#             */
/*   Updated: 2019/06/11 12:12:02 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

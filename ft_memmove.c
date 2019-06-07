/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:09:57 by mdube             #+#    #+#             */
/*   Updated: 2019/06/06 17:51:23 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	const char		*s;
	char			*d;

	s = (const char *)src;
	d = (char *)dst;
	i = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	else 
	{
		while (len != 0)
		{
			d[i] = s[i];
			i++;
			len--;
		}
		return (dst);
	}
	return (NULL);
}

#include <stdio.h>

int		main(void)
{
	char *str = ft_strdup("abcdefghi");

	ft_memmove(str + 3, str, 5);
	printf("%s", str + 3);
	return(0);
}

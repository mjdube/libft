/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:19:32 by mdube             #+#    #+#             */
/*   Updated: 2019/06/05 18:37:48 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	unsigned int	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	d = (char *)dst;
	s = (const char *)src;
/*	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
//	d[i] = '\0';*/
	if ((int)n < ft_strlen(s))
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (s[i])
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

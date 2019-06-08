/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:09:57 by mdube             #+#    #+#             */
/*   Updated: 2019/06/08 11:34:56 by mdube            ###   ########.fr       */
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
	if (s > d)
		ft_memcpy(d, s, len);
	if (s == NULL && d == NULL)
		return (NULL);
	else 
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
		return (dst);
	}
	return (NULL);
}

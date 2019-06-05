/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:19:32 by mdube             #+#    #+#             */
/*   Updated: 2019/06/05 16:21:15 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	unsigned int	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	else
	{
		i = 0;
		d = (char *)dst;
		s = (const char *)src;
		while (s[i] && i < n)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	return (dst);
}

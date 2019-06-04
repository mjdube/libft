/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:11:34 by mdube             #+#    #+#             */
/*   Updated: 2019/06/04 15:11:02 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*d;
	const char		*s;
	unsigned int	i;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

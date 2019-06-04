/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:09:57 by mdube             #+#    #+#             */
/*   Updated: 2019/06/04 15:34:37 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	const char		*s;
	char			*d;

	s = (const char *)src;
	d = (char *)dst;
	i = 0;
	while (s[i] && i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dst);
}

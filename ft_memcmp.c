/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:16:49 by mdube             #+#    #+#             */
/*   Updated: 2019/06/04 15:19:43 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int				ft_memcmp(const void *s1, const void *s2, size_t l)
{
	int			i;
	int			n;
	int			m;
	const char	*a;
	const char	*b;

	a = (char *)s1;
	b = (char *)s2;
	i = 0;
	m = 0;
	n = 0;
	while (a[i] && l > 0)
	{
		if (a[i] != b[i])
		{
			n = (int)a[i];
			m = (int)b[i];
			return (n - m);
		}
		i++;
		l--;
	}
	return (0);
}

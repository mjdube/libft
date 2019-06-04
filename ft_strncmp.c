/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:01:18 by mdube             #+#    #+#             */
/*   Updated: 2019/06/04 17:25:28 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				a;
	int				b;

	i = 0;
	a = 0;
	b = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[i])
		{
			a += (int)s1[i];
			b += (int)s2[i];
		}
		else if (s1[i] != s2[i])
		{
			a = (int)s1[i];
			b = (int)s2[i];
			return (a - b);
		}
		i++;
	}
	return (a - b);
}

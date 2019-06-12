/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:00:59 by mdube             #+#    #+#             */
/*   Updated: 2019/06/12 16:32:30 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(const char *s1, const char *s2, size_t n)
{
	int i;

	if (s1 && s2)
	{
		if ((ft_strncmp(s1, s2, n)) == 0)
			i = 1;
		else
			i = 0;
		return (i);
	}
	return (0);
}

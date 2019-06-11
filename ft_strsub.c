/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:09:12 by mdube             #+#    #+#             */
/*   Updated: 2019/06/11 14:58:01 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char				*ft_strsub(const char *s, unsigned int start, size_t len)
{
	if (s)
	{
		char			*new;
		unsigned int	i;
		int				j;
		
		if (!(new = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		i = start;

		j = 0;
		ft_strncpy(new, (char *)s + start, len);
		return (new);
	}
	return (0);
}

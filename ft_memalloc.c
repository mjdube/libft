/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:48:22 by mdube             #+#    #+#             */
/*   Updated: 2019/06/06 10:35:11 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void				*ft_memalloc(size_t size)
{
	char			*s;
	unsigned int	i;
	void			*mem;

	mem = NULL;
	s = (char *)mem;
	i = 0;

	if (!(s = (char *)malloc(sizeof(size))))
		return (NULL);
	else
	{
		while (i < size)
		{
			s[i] = 0;
			i++;
		}
	}
		return (mem);
}

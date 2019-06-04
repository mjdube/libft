/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:48:22 by mdube             #+#    #+#             */
/*   Updated: 2019/06/04 15:07:53 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void				*ft_memalloc(size_t size)
{
	char			*s;
	void			*mem;

	mem = NULL;
	s = (char *)mem;
	if (!(s = (char *)malloc(sizeof(size))))
		return (NULL);
	else
		return (mem);
}

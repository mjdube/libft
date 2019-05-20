/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:56:12 by mdube             #+#    #+#             */
/*   Updated: 2019/05/20 16:55:41 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int i;
	char *dst;

	i = 0;
	while(src[i])
		i++;

	if(src == NULL)
		return NULL;
	else
		dst = (char*)malloc(sizeof(char) * (i + 1));

	i = 0;
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';
	return (dst);
}

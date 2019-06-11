/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:39:47 by mdube             #+#    #+#             */
/*   Updated: 2019/06/11 16:28:14 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char				*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	/*int				j;
	unsigned int	i;
	char			*str;

	if (hay[0] == '\0')
		return (NULL);
	i = 0;
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (hay[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				str = (char *)&hay[i];
			}
			j++;
		}
		i++;
	}
	return (str);*/
	unsigned int	i;
	unsigned int	j;

	if (!*needle)
		return ((char *)hay);
	j = 0;
	while (hay[j] != '\0' && (size_t)j <= len)
	{
		if (hay[j] == needle[0])
		{
			i = 0;
			while (needle[i] != '\0' && hay[j + i] == needle[i] && (size_t)(j + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&hay[j]);
		}
		j++;
	}
	return (0);
}

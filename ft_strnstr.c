/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:39:47 by mdube             #+#    #+#             */
/*   Updated: 2019/06/04 17:49:14 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char				*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	int				j;
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
	return (str);
}

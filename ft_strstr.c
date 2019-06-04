/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:21:53 by mdube             #+#    #+#             */
/*   Updated: 2019/06/04 17:45:58 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strstr(const char *hay, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	if (hay[0] == '\0')
		return (NULL);
	while (hay[i])
	{
		j = 0;
		while (needle[j] == hay[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return (char *)&hay[i];
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

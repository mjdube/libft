/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:55:54 by mdube             #+#    #+#             */
/*   Updated: 2019/05/27 13:10:29 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strchr(const char *str, int n)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)n)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

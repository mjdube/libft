/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:18:13 by mdube             #+#    #+#             */
/*   Updated: 2019/06/05 09:58:51 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	char	*fresh;
	int		i;

	fresh = ft_strcat((char *)s1, s2);
	new = (char *)malloc(sizeof(char) * ft_strlen(fresh) + 1);
	i = 0;
	while (fresh[i])
	{
		new[i] = fresh[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

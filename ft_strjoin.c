/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:18:13 by mdube             #+#    #+#             */
/*   Updated: 2019/06/11 17:57:52 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	char	*w1;
	char	*w2;
	size_t	fresh;

	fresh = ft_strlcat((char *)s1, s2, ft_strlen(s1) + ft_strlen(s2));
	w1 = ft_strcat((char *)s1, s2);
	new = (char *)malloc(sizeof(char) * fresh + 1);
	w2 = ft_strcat(new, w1);
	return (w1);
}

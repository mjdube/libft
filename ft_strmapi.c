/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:39:35 by mdube             #+#    #+#             */
/*   Updated: 2019/05/30 16:52:12 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*new;

	new = (char)malloc(sizeof(s) * ft_strlen(s));
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
}

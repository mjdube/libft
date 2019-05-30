/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:10:03 by mdube             #+#    #+#             */
/*   Updated: 2019/05/30 15:16:34 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	return (str);
}

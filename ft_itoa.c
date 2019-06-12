/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:25:25 by mdube             #+#    #+#             */
/*   Updated: 2019/06/12 17:52:32 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char				*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	unsigned int	i;
	unsigned int	size;

	if (nbr < 0)
		n = (unsigned int)(nbr * -1);
	else
		n = (unsigned int)nbr;

	}

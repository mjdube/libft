/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:37:02 by mdube             #+#    #+#             */
/*   Updated: 2019/05/18 11:43:02 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned char		ft_tolower(unsigned char c)
{
	unsigned char output;

	if(c >= 'A' && c <= 'Z')
		output = c + 32;

	return (output);
}

int		main()
{

	printf("%c", ft_tolower('L'));

	return (0);
}

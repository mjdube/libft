/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:54:52 by mdube             #+#    #+#             */
/*   Updated: 2019/05/27 17:20:10 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <string.h>

char		*ft_strlcat(char *dst, const char *src)
{
	int i;
	int j;
	//size_t len;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
		//n--;
	}
	/*len = 0;
	while (dst[len])
		len++;*/
	dst[i] = '\0';
	return (dst);
}

int			main()
{
	char firstname[20] = "Mlungisi ";
	char *lastname = "Dube";

	char *mine = ft_strlcat(firstname, lastname);
	char *computer = strcat(firstname, lastname);

	printf("%s\n", computer);
	printf("%s\n", mine);
	return 0;
}

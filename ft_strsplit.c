/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:48:08 by mdube             #+#    #+#             */
/*   Updated: 2019/06/01 14:41:32 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char **ft_strsplit(const char *s, char c)
{
	char **str;
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	str = (char **)malloc(sizeof(char) * strlen(s) + 1);
	while (s[i])
	{
		if (isalpha(s[i]) == 0)
		{
			i++;
		}
		else
		{
			while (isalpha(s[i]) == 1)
			{
				str[j][k] = s[i];
				i++;
				k++;
			}
			str[j][k] = '\0';
			j++;
			k = 0;
		}
	}
	*str[j] = '\0';
	return (str);
}

int		main()
{
	char *str = "*hello***fellow***students";

	char **n = ft_strsplit(str, '*');

	printf("%s", n[1]);

	return 0;
}

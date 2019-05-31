/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:48:08 by mdube             #+#    #+#             */
/*   Updated: 2019/05/31 17:23:22 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char **ft_strsplit(const char *s, char c)
{
	char **str;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	str = (char **)malloc(sizeof(char *) * strlen(s));
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			while (s[i] != c)
			{
				str[j][k] = s[i];
				i++;
				k++;
			}
			if (s[i] == c)
			{
				str[j][k] = '\0';
				j++;
			}
			k = 0;
		}
	}
	return (str);
}

int		main()
{
	char *str = "*hello***fellow***students";

	char **n = ft_strsplit(str, '*');

	printf("%s", n[1]);

	return 0;
}

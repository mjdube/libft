/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:54:52 by mdube             #+#    #+#             */
/*   Updated: 2019/05/28 11:17:11 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	if (n == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i])
		i++;
	while (dst[j] && 0 < n)
	{
		j++;
		n--;
	}
	len = j + i;
	return (len);
}

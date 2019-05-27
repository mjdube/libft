/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:39:21 by mdube             #+#    #+#             */
/*   Updated: 2019/05/27 11:29:05 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*src;
	char	chr;

	chr = (char)c;
	src = (char *)s;
	i = 0;
	while (src[i])
	{
		if (src[i] == chr)
			return (&src[i]);
		i++;
	}
	return (0);
}

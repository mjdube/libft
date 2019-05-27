/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:19:32 by mdube             #+#    #+#             */
/*   Updated: 2019/05/27 14:13:30 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

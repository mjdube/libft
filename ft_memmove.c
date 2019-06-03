/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:09:57 by mdube             #+#    #+#             */
/*   Updated: 2019/05/27 11:38:01 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*s;
	char	*d;

	s = (const char *)src;
	d = (char *)dst;
	i = 0;
	while (s[i] && i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dst);
}

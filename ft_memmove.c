/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:09:57 by mdube             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/06/13 09:11:47 by mdube            ###   ########.fr       */
=======
/*   Updated: 2019/06/13 11:21:27 by mdube            ###   ########.fr       */
>>>>>>> 714b2214febd2d1f58f350847f6c21360879b679
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void						*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (s < d)
<<<<<<< HEAD
	{
		while (++i <= len)
			d[len - i] = s[len - i];
	}
	else
	{
=======
		while (++i <= len)
			d[len - i] = s[len - i];
	else
>>>>>>> 714b2214febd2d1f58f350847f6c21360879b679
		while (len-- > 0)
		{
			*(d) = *(s);
			d++;
			s++;
		}
<<<<<<< HEAD
	}
=======
>>>>>>> 714b2214febd2d1f58f350847f6c21360879b679
	return (dst);
}

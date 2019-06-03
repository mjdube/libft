/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:43:32 by mdube             #+#    #+#             */
/*   Updated: 2019/05/30 13:57:16 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_bzero(void *s, size_t n)
{
	char	*dst;
	int	i;

	dst = (char *)s;
	while (i < n)
	{
		dst[i] = 0;
		i++;
	}
}

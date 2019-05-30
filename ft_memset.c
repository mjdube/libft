/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:48:22 by mdube             #+#    #+#             */
/*   Updated: 2019/05/27 11:32:30 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*p;

	p = (char *)b;
	while (0 < len)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}
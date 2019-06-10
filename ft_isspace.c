/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:45:20 by mdube             #+#    #+#             */
/*   Updated: 2019/06/10 17:50:00 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isspace(int c)
{
	if (c)
	{
		if (c == '\n' || c == '\v' || c == '\f' ||
				c == '\r' || c == ' ' || c == '\t')
			return (1);
	}
	return (0);
}

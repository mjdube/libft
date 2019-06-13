/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:31:47 by mdube             #+#    #+#             */
/*   Updated: 2019/06/13 15:59:39 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const content, size_t content_size)
{
	t_list	*fresh;

	if (!(fresh = (t_list *)ft_memalloc(t_list)))
		return (NULL);
	if (content == NULL)
	{
		fresh->content = NULL;
		fresh->content_size = 0;
	}
	else
	{
		if (!())
	}

}

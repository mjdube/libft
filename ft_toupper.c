/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:24:42 by mdube             #+#    #+#             */
/*   Updated: 2019/05/18 11:34:22 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char ft_upper(unsigned char c)
{
	unsigned char output;
		
	if(c >= 'a' && c <= 'z')
		output = c - 32;
	
	return (output);
}
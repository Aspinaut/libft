/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:57:35 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/14 07:44:22 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	d_size;

	count = 0;
	while (dest[count] && count < size)
		count++;
	d_size = count;
	while (src[count - d_size] && count + 1 < size)
	{
		dest[count] = src[count - d_size];
		count++;
	}
	if (d_size < size)
		dest[count] = '\0';
	return (d_size + ft_strlen((char*)src));
}

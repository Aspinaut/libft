/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:21:27 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/10 12:32:33 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	char	*dest_buffer;
	char	*src_buffer;

	i = -1;
	dest_buffer = (char *)dest;
	src_buffer = (char *)src;
	while (++i < (int)n)
		dest_buffer[i] = src_buffer[i];
	dest = (void *)dest_buffer;
	return (dest);
}

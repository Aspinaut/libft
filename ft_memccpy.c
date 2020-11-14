/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:21:27 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/14 11:31:57 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char		*dest_buffer;
	char		*src_buffer;

	i = -1;
	dest_buffer = (char *)dest;
	src_buffer = (char *)src;
	while (++i < n)
	{
		dest_buffer[i] = src_buffer[i];
		if ((int)src_buffer[i] == c)
			break ;
	}
	dest = (void *)dest_buffer;
	return (dest);
}

// void * ft_memccpy( void * dest, const void* src, int c, size_t count)
// {
//   long unsigned int i;
//
//   i = 0;
//   while (count-- > 0)
//   {
// 	((char *)dest)[i] = ((unsigned char *)src)[i];
// 	if (src[i] == (unsigned char)c)
//     {
// 	  return(dest + i + 1);
//     }
//     i++;
//   }
//   return(NULL);
// }

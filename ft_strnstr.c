/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 09:25:24 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/08 09:27:53 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	size_t	len_buffer;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		if (*big == *little)
		{
			i = 0;
			len_buffer = len;
			while (big[i] == little[i] && little[i] && len_buffer)
			{
				i++;
				len_buffer--;
			}
			if (!len_buffer)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}

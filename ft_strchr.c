/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 08:25:16 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/08 08:25:23 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && c)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (!c)
		return (ft_strdup(""));	
	return (NULL);
}

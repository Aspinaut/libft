/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 09:10:31 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/14 08:38:10 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = ft_strnew(ft_strlen((char *)s1) + ft_strlen((char *)s2));
	ft_strcpy(s3, (char *)s1);
	ft_strcat(s3, (char *)s2);
	return (s3);
}

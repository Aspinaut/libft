/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:57:35 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/13 06:04:47 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t copied_length;

	if (size) {
		copied_length = ft_strlen(ft_strncat(dst, (char *)src, (int)size));
	}
	return (copied_length);
}

int	main()
{
	char *str = "bon";
	char dest[3];
	size_t size = 1;

	//printf("Offi : %ld\n", strlcat(dest, str, size));
	//printf("FT ncat : %s\n", ft_strncat(dest, str, 7));
	printf("FT : %ld\n", ft_strlcat(dest, str, size));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:11:36 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/10 11:27:27 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{


}

int	main()
{
	char arr[5] = {'a','b','c','d','e'};
	int arr2[5] = {0,0,0,0,1};
	char *dest;
	int *dest2;
	size_t n = 4;
	int i=0;

	dest = memchr(arr, 'z', n);
	dest2 = memchr(arr2, 1, n);
	while (i < (int)n)
	{
		//printf("memchr : %c\n", dest[i]);
		printf("memchr : %d\n", arr2[i]);
		i++;
	}
	return (0);
}

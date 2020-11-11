/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:42:48 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/10 11:27:33 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{

}

int	main()
{
	char arr[5] = {'a','b','c','d','e'};
	char arr2[5] = {'a','b','c','d','e'};
	//char arr2[5] = {'f','g','h','i','j'};
	int res_mem;
	int res_str;
	size_t n = 5;

	printf("mem : %d\n", memcmp(arr, arr2, n));
	printf("str : %d", strncmp(arr, arr2, n));

	return (0);
}

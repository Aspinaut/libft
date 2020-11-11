/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 09:10:31 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/10 13:27:53 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*insert_in_arr(char *arr, int size, char **strs, char *sep)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < size)
	{
		ft_strcpy(arr + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(arr + j, sep);
			j += ft_strlen(sep);
		}
		i++;
	}
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*arr;
	int		j;

	j = 0;
	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		total_len += ft_strlen(sep) * (size - 1);
	arr = malloc((total_len + 1) * (sizeof(char)));
	if (!arr)
		return (NULL);
	insert_in_arr(arr, size, strs, sep);
	return (arr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{

}

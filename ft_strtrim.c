/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:23:18 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/14 08:26:43 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int is_inset(set, c)
// {
//   int i;
//
//   i = 0;
//   while (set[i])
//   if c == set[i]
//   return 1
//   i++
// return 0
// }
//
// char  *ft_strtrim(char const *s1, char const *set)
// {
//   char    *s2;
//   size_t  spaces_nb;
//   int     i;
//   int     j;
//   int     k;
//
//   spaces_nb = 0;
//   i = 0;
//   k = 0;
//   s2 = ft_strnew(ft_strlen((char *)s) - spaces_nb);
//   while is_inset(set, s1[i])
//     i++;
//   j = ft_strlen((char *)s) - 1;
//   while !is_inset(set, s1[i])
//     s2[k] = s[i]
//   return (s2);
// }

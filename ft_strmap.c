/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:20:09 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/17 13:54:06 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strmap(char const *s, char (*f)(char))
{
  char *s2;
  size_t  i;

  i = 0;
  if (!(s2 = ft_strnew(ft_strlen((char *)s))))
    return (NULL);
  while (s[i])
  {
    (*f)(s2[i++]);
  }
  s2[i] = '\0';
  return (s2);
}

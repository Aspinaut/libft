/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:20:24 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/13 06:27:44 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *s2;
  unsigned int i;

  s2 = ft_strnew(ft_strlen((char *)s));
  i = 0;
  while (s[i] && s2[i])
  {
    (*f)(i, s2[i]);
    i++;
  }
  return (s2);
}

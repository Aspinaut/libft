/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:23:18 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/13 05:55:40 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strtrim(char const *s)
{
  char    *s2;
  size_t  spaces_nb;
  int i;
  int j;

  spaces_nb = 0;
  i = 0;
  while (s[i])
    if (s[i++] == ' ' || s[i++] == '\n' || s[i++] == '\t')
      spaces_nb++;
  s2 = ft_strnew(ft_strlen((char *)s) - spaces_nb);
  i = -1;
  j = 0;
  while (s[++i])
    if (!(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
      s2[j++] = s[i];
  return (s2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:21:16 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/12 09:21:09 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strsub(char const *s, unsigned int start, size_t len)
{
  char    *sample;
  size_t  i;

  sample = ft_strnew(len);
  i = 0;
  while (i < len)
  {
    sample[i] = s[start];
    start++;
    i++;
  }
  return (sample);
}

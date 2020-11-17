/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:20:44 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/17 18:54:02 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_strequ(char const *s1, char const *s2)
{
  while (*s1 && *s2 && *s1 == *s2)
  {
    s1++;
    s2++;
  }
  if (*s1 == *s2)
    return (1);
  return (0);
}

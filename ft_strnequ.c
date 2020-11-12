/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:20:59 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/12 08:49:53 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_strnequ(char const *s1, char const *s2, size_t n)
{
  size_t i;

  i = 0;
  while (s1[i] && s1[i] == s2[i] && i < n)
    i++;
  return (s1[i] == s2[i]) ? 1 : 0;
}

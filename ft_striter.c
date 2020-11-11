/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:19:31 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/11 14:54:46 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void add_one_to_char(char *c)
{
    if (*c == 'o')
      write(1, "h", 1);
    else
      write(1, c, 1);
}

void  ft_striter(char *s, void (*f)(char *))
{
  while (*s != '\0')
  {
    (*f)(s++);
  }
}

int main()
{
  char str[7] = "bonjour";
  ft_striter(str, add_one_to_char);
  //printf("%s", str);
  return (0);
}

// void	ft_foreach(int *tab, int length, void (*f)(int))
// {
// 	int i;
//
// 	i = 0;
// 	while (tab[i])
// 		i++;
// 	if (length > i - 1)
// 		return ;
// 	i = -1;
// 	while (tab[++i] && length--)
// 		(*f)(tab[i]);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:23:43 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/13 19:24:18 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t  count_words_in_str(char const *s, char c)
{
  size_t  words_count;
  int     i;

  i = 0;
  words_count = 0;
  while (s[i])
  {
    if ((s[i] != c && s[i + 1] == c) \
    || (s[i] != c && !s[i + 1]))
      words_count++;
    i++;
  }
  return (words_count);
}

char  **ft_strsplit(char const *s, char c)
{
  char  **arr;
  int   i;
  int   j;
  int   k;

  **arr = ft_memalloc(count_words_in_str(s, c));
  i = 0;
  j = 0;
  while (i < words_count)
  {
    arr[i] = malloc(sizeof(char *)*ft_strlen(s))
    while (s[j] == c)
      j++;
    while (s[j] != c)
    {
      arr[i][k] = s[i];
      j++;
    }
    arr[i][j] = '\0';
    i++;
      // *arr[k] = ft_strnew();
      // on malloc chaque mot dans *arr
    }
  }
  return (arr);
}
int main()
{
  printf("%s", ft_strsplit("*bon* jour*  * *", '*'));
}

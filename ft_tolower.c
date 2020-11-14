/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmasse <vmasse@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:04:43 by vmasse            #+#    #+#             */
/*   Updated: 2020/11/14 18:02:42 by vmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c < -1)
		 return ((unsigned char)c);
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

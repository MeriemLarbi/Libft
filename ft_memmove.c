/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:42:09 by ilarbi            #+#    #+#             */
/*   Updated: 2016/12/30 16:46:16 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	s = (const char *)src;
	d = (char *)dst;
	if (len == 0 || *s == '\0')
		return (dst);
	if (dst <= src)
	{
		return (ft_memcpy(dst, src, len));
	}
	else
	{
		s += len - 1;
		d += len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	return (dst);
}

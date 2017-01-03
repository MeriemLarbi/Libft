/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:31:18 by ilarbi            #+#    #+#             */
/*   Updated: 2016/12/20 17:22:33 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
	{
		ptr = (char *)(&s[i]);
		return (ptr);
	}
	else
		return (NULL);
}
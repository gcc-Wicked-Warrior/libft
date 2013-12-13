/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:58:29 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 18:07:54 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*src;

	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char) c)
			return ((void *) src + i);
		i++;
	}
	return (NULL);
}

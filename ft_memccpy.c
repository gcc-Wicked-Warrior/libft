/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:54:34 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 17:45:50 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*dest;
	const char		*src;
	size_t			i;

	dest = s1;
	src = s2;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == (unsigned char) c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}

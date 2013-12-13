/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:11:40 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 18:41:40 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
    size_t	src_len;

	dest_len = 0;
	src_len = 0;
	while (size != 0 && *(dst + dest_len) != '\0')
	{
		dest_len++;
		size--;
	}
	if (size == 0)
		return (dest_len + ft_strlen(src));
	while (*src != '\0')
	{
		if (size != 1)
		{
			*(dst + dest_len) = *src;
			dst++;
			size--;
		}
		src++;
		src_len++;
	}
	*(dst + dest_len) = '\0';
	return (dest_len + src_len);
}


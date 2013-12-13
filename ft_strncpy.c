/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:06:41 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 18:36:55 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
    char	*s_temp;

	s_temp = s1;
	while (n > 0 && *s2 != '\0')
	{
		*s_temp++ = *s2++;
		n--;
	}
	while (n > 0)
	{
		*s_temp++ = '\0';
		n--;
	}
	return (s1);
}

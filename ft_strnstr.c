/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:19:43 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 18:47:10 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s1_count;
	size_t	s2_count;

	s1_count = 0;
	s2_count = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[s1_count] != '\0' && s1_count < n)
	{
		if (s1[s1_count] == s2[s2_count])
			s2_count += 1;
		else
			s2_count = 0;
		if (s2[s2_count] == '\0')
			return ((char*) &s1[s1_count - s2_count + 1]);
		s1_count += 1;
	}
	return (NULL);
}




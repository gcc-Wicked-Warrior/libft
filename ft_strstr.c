/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:17:35 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 18:45:40 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[k] != '\0')
	{
		j = 0;
		i = k;
		if (s1[i] == s2[0])
		{
			while (s2[j] == s1[i])
			{
				j++;
				if (s2[j] == '\0')
					return ((char *)s1 + (i - j + 1));
				i++;
			}
		}
		k++;
	}
	return (NULL);
}

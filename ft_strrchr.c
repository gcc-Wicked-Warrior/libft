/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:16:00 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 18:44:41 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
    int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[k] != '\0')
		k++;
	if (s[0] == '\0' && c != 0)
		return (NULL);
	while (k != 0 && s[k] != c)
		k--;
	if (s[k] == c)
		j++;
	if (c == 0)
		return ((char *)s + k);
	if (j == 0)
		return (NULL);
	return ((char *)s + k);
}


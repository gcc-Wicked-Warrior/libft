/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:45:12 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 18:35:14 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	int	count;

	count = 0;
	while (s2[count] != '\0')
	{
		s1[count] = s2[count];
		count++;
	}
	s1[count] = '\0';
	return (s1);
}

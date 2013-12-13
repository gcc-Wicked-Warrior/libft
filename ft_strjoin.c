/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:18:26 by ccosta            #+#    #+#             */
/*   Updated: 2013/12/06 20:29:51 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char        *ft_strjoin(char const *s1, char const *s2)
{
	char        *concat;
	int                len_1;
	int                len_2;

	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	concat = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!concat)
		return (NULL);
	concat[0] = '\0';
	ft_strcat(concat, s1);
	ft_strcat(concat, s2);
	return (concat);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:08:44 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 18:38:18 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
	size_t	length;

	length = ft_strlen(s1);
	ft_strcpy(s1 + length, s2);
	return (s1);
}

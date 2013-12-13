/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:41:58 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/30 18:34:00 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*copy;
	size_t		len;

	len = ft_strlen(s1) + 1;
	copy = (char *) malloc(sizeof(char) * len);
	return (ft_memcpy(copy, s1, len));
}

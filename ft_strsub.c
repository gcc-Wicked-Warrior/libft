/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:16:41 by ccosta            #+#    #+#             */
/*   Updated: 2013/12/06 20:18:24 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char            *str;
    unsigned int    i;

    if ((str = (char *) malloc(len + 1)) == NULL)
        return (NULL);
    i = 0;
    while (len--)
        str[i++] = s[start++];
    str[i] = '\0';
    return (str);
}

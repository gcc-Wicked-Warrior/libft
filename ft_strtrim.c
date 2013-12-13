/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:19:56 by ccosta            #+#    #+#             */
/*   Updated: 2013/12/06 20:18:51 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char            *str;
    unsigned int    start;
    unsigned int    end;

    start = 0;
    end = ft_strlen(s) - 1;
    while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
        start++;
    if (s[start] == '\0')
        return (ft_strnew(0));
    while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
        end--;
    if ((end - start) <= 0)
        return (ft_strnew(0));
    str = ft_strsub(s, start, end - start + 1);
    if (str == NULL)
        return (NULL);
    return (str);
}

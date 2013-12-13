/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:36:45 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/24 17:53:55 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:26:39 by ccosta            #+#    #+#             */
/*   Updated: 2013/11/27 20:58:38 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_atoi(const char *str)
{
	long int	atoi;
	int			index;

	atoi = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	index = (str[0] == '-' || str[0] == '+') ? 1 : 0;
	if (ft_strncmp(str, "-2147483648", 11) == 0
		&& (str[12] < 48 || str[12] > 57))
		return (-2147483648);
	while (str[index] <= 57 && str[index] >= 48)
	{
		if ((str[index] - 48) + (atoi * 10) < 0)
			return (-1);
		atoi = (str[index] - 48) + (atoi * 10);
		++index;
	}
	if (str[0] == '-' && str[1] <= 57 && str[1] >= 48)
		atoi *= -1;
	return ((int) atoi);
}

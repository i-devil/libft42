/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-vill <ide-vill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 08:31:15 by ide-vill          #+#    #+#             */
/*   Updated: 2014/11/12 09:39:57 by ide-vill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		i;
	int		a;
	int		c;

	i = 0;
	c = 0;
	a = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\r' || str[i] == '\v' || str[i] == '\f') && c == 0)
		i++;
	if (str[i] == '-' && c == 0)
	{
		c = -1;
		i++;
	}
	if (str[i] == '+' && c == 0)
	{
		c = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		a = (a * 10) + (str[i++] - 48);
	if (c != 0)
		a = c * a;
	return (a);
}

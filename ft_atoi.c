/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:55:03 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/26 17:18:39 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '	' || c == '\v')
		return (1);
	if (c == '\t' || c == '\r' || c == '\n')
		return (1);
	if (c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *nbr)
{
	long	ret;
	int		parity;
	char	*n;

	ret = 0;
	parity = 1;
	n = (char *)nbr;
	while (ft_isspace(*n))
		n++;
	if (*n == '-' || *n == '+')
	{
		if (*n == '-')
			parity = -1;
		n++;
	}
	while (ft_isdigit(*n))
	{
		ret = ret * 10 + (*n++ - '0');
		if (ret > 2147483657 && parity == 1)
			return (-1);
		else if (ret > 2147483648 && parity == -1)
			return (0);
	}
	return (ret * parity);
}


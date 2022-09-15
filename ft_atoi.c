/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:55:03 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/14 17:37:43 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
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
	int		ret;
	int		parity;
	char	*n;

	ret = 0;
	parity = 1;
	n = (char *)nbr;
	if (!n)
		return (0);
	while (ft_isspace(*n))
		n++;
	if (*n == '-' && ft_isdigit(*(n + 1)))
	{
		n++;
		parity = -1;
	}
	else if (*n == '+' && ft_isdigit(*(n + 1)))
		n++;
	while (ft_isdigit(*n))
			ret = ret * 10 + (*n++ - '0');
	return (ret * parity);
}

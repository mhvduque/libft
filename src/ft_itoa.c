/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:45:16 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/16 12:26:02 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_itoa_aloc(size_t len, int n)
{
	char	*ret;

	if (n == 0)
		return (ft_strdup("0\0"));
	else
		ret = ft_calloc(len + 1, sizeof(char));
	if (!ret)
		return (0);
	if (n < 0)
	{
		n *= -1;
		ret[0] = '-';
	}
	ret[len] = '\0';
	while (--len)
	{
		ret[len] = (n % 10) + '0';
		n /= 10;
	}
	if (ret[0] != '-')
		ret[0] = (n % 10) + '0';
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648\0"));
	len = ft_get_len(n);
	ret = ft_itoa_aloc(len, n);
	if (!ret)
		return (0);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:25:19 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/16 12:26:25 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs_value(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr[13];
	int		len;
	int		n_flag;

	n_flag = 0;
	if (n < 0)
		n_flag = 1;
	ft_bzero(nbr, 13);
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	len = 0;
	while (n != 0)
	{
		nbr[len++] = '0' + ft_abs_value(n % 10);
		n = (n / 10);
	}
	if (n_flag)
		nbr[len] = '-';
	else if (len > 0)
		len--;
	while (len >= 0)
		write(fd, &nbr[len--], 1);
}

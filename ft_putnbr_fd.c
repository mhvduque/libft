/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:25:19 by mhornero          #+#    #+#             */
/*   Updated: 2022/08/15 17:26:59 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	if (fd < 0)
		return ;
	nbr = ft_itoa(n);
	write(fd, nbr, ft_strlen(nbr));
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 03:44:17 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/14 17:32:35 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (size >= 65535 || count >= 65535)
		return (0);
	ret = malloc(size * count);
	if (!ret)
		return (0);
	ft_bzero(ret, count * size);
	return (ret);
}

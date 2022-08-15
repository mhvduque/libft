/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:49:49 by mhornero          #+#    #+#             */
/*   Updated: 2022/08/07 04:57:49 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	ret;
	size_t	aux;

	ret = 0;
	while (dst[ret] != '\0' && ret < len)
		ret++;
	s = (char *)src;
	d = dst + ret;
	aux = ret + 1;
	while (*s && aux++ < len)
		*d++ = *s++;
	if (ret < len)
		*d = '\0';
	if (!ret)
		return (ft_strlen((char *)src));
	return (ret + ft_strlen((char *)src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:32:01 by mhornero          #+#    #+#             */
/*   Updated: 2022/08/05 19:47:13 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	char	*d;
	char	*s;

	d = dst;
	s = (char *)src;
	if (!src || !dst)
		return (0);
	if (len == 0)
		return (ft_strlen(s));
	while (--len && *s)
		*d++ = *s++;
	*d = '\0';
	return (ft_strlen((char *)src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 04:27:44 by mhornero          #+#    #+#             */
/*   Updated: 2022/10/01 17:10:51 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;

	if (s)
	{
		if (ft_strlen((char *)s) < start)
		{
			r = ft_calloc(1, sizeof(char));
			if (!r)
				return (0);
			return (r);
		}
		if (ft_strlen((char *)s) < len)
			len = ft_strlen((char *)s) - start;
		r = ft_calloc(len + 1, sizeof(char));
		if (!r)
			return (0);
		ft_memcpy(r, &s[start], len);
		return (r);
	}
	return (0);
}

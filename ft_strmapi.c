/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:47:23 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/14 17:39:00 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	ret = ft_calloc(ft_strlen((char *)s) + 1, sizeof(char));
	if (!ret)
		return (0);
	while (i < ft_strlen((char *)s))
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[ft_strlen((char *)s)] = '\0';
	return (ret);
}

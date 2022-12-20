/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:35:05 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/16 12:27:02 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, const char *set)
{
	char	*aux;

	aux = (char *)set;
	while (*aux)
	{
		if (c == *aux)
			return (1);
		aux++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	char	*start;
	char	*end;
	char	*aux;
	size_t	len;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	aux = (char *)s1;
	while (ft_inset(*aux, set) && *aux++)
		start++;
	aux = (char *)&s1[ft_strlen((char *)s1) - 1];
	end = (char *)&s1[ft_strlen((char *)s1) - 1];
	while (ft_inset(*aux, set) && aux-- > start)
		end--;
	len = ft_strlen(start) - ft_strlen(end) + 1;
	ret = ft_calloc(len + 1, sizeof(char));
	if (!ret)
		return (0);
	ft_memcpy(ret, start, len);
	ret[len] = '\0';
	return (ret);
}

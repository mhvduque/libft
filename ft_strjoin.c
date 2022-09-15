/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:24:29 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/15 18:12:13 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*ret;
	int					len;
	unsigned int		i;
	unsigned int		j;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	ret = ft_calloc(len + 1, sizeof(char));
	if (!ret)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
		ret[j++] = s1[i++];
	i = 0;
	while (s2[i])
		ret[j++] = s2[i++];
	ret[len] = '\0';
	return (ret);
}

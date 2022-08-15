/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:24:29 by mhornero          #+#    #+#             */
/*   Updated: 2022/08/09 15:34:10 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	ret = ft_calloc(len, sizeof(char));
	if (!ret)
		return (0);
	ft_strlcat(ret, s1, ft_strlen((char *)s1) + 1);
	ft_strlcat(ret, s2, len);
	ret[len] = '\0';
	return (ret);
}

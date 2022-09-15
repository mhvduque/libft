/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 04:13:51 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/14 17:34:44 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (!s1)
		return (0);
	s2 = ft_calloc(ft_strlen((char *)s1) + 1, sizeof(char));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1, ft_strlen((char *)s1) + 1);
	return (s2);
}

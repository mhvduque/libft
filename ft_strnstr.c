/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:53:00 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/14 17:22:09 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*n;
	char	*h;
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	if (!len)
		return (0);
	h = (char *)haystack;
	j = 0;
	while (*h && j < len)
	{
		i = 0;
		n = (char *)needle;
		while (*n && (*n++ == *(h + i)) && i++ + j < len)
			if (!*n)
				return (h);
		j++;
		h++;
	}
	return (0);
}

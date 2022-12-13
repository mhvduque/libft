/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 04:37:50 by mhornero          #+#    #+#             */
/*   Updated: 2022/12/13 23:54:07 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*d;

	d = (char *)s;
	while (*d != '\0')
	{
		if (*d == (unsigned char)c)
			return (d);
		d++;
	}
	if (*d == (unsigned char)c)
		return (d);
	return (0);
}

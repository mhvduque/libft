/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:19:26 by mhornero          #+#    #+#             */
/*   Updated: 2022/12/13 23:52:08 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*d;
	char			*t;

	d = (unsigned char *)s;
	t = 0;
	while (*d != '\0')
	{
		if (*d == (unsigned char)c)
			t = (char *)d;
		d++;
	}
	if (*d == (unsigned char)c)
		t = (char *)d;
	return (t);
}

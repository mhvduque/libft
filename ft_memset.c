/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:14:05 by mhornero          #+#    #+#             */
/*   Updated: 2022/08/15 04:29:01 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*m;

	if (!n)
		return (0);
	m = s;
	while (n-- > 0 && m)
		*(unsigned char *)m++ = (unsigned char)c;
	return (s);
}

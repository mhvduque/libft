/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 04:37:50 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/30 18:39:07 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char			*t;
	unsigned char	*d;

	d = (unsigned char *)s;
	t = 0;
	while (*d != '\0')
	{
		if (*d == (unsigned char)c)
		{
			t = (char *)d;
			return (t);
		}
		d++;
	}
	if (c == '\0')
	{
		t = (char *)d;
		return (t);
	}
	else
		return (0);
}

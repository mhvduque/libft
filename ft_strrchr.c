/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:19:26 by mhornero          #+#    #+#             */
/*   Updated: 2022/09/30 18:44:33 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char			*t;
	unsigned char	*d;

	d = (unsigned char *)s;
	t = 0;
	while (*d != '\0')
	{
		if (*d == (unsigned char)c)
			t = (char *)d;
		d++;
	}
	if (c == '\0')
	{
		t = (char *)d;
		return (t);
	}
	else if (!t)
		return (0);
	return (t);
}

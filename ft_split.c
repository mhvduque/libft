/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 23:50:59 by mhornero          #+#    #+#             */
/*   Updated: 2022/08/16 05:55:41 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_aloc(size_t size)
{
	return (ft_calloc(size + 1, sizeof(char)));
}

int	ft_n_words(char const *s, char c)
{
	int	n_words;

	n_words = 0;
	if (*s != c && *s)
	{
		n_words++;
		s++;
	}
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			n_words++;
		s++;
	}
	return (n_words + 1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**lst;

	if (!s)
		return (0);
	lst = (char **)malloc(sizeof(char *) * ft_n_words(s, c));
	if (!lst)
		return (0);
	j = 0;
	while (*s)
	{
		i = 0;
		while (s[i] != c && s[i] != 0)
			i++;
		if (i)
		{
			lst[j++] = ft_memcpy(ft_str_aloc(i), s, i);
			s = &s[i];
		}
		else
			s++;
	}
	lst[j] = (void *)0;
	return (lst);
}

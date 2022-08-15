/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 23:50:59 by mhornero          #+#    #+#             */
/*   Updated: 2022/08/10 04:12:13 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_num_words(char const *s, char c)
{
	char	*aux;
	size_t	n_words;

	aux = (char *)s;
	n_words = 0;
	while (*aux)
	{
		if (*aux == c && *(aux + 1) != c)
			n_words++;
		aux++;
	}
	return (n_words);
}

void	ft_get_len_words(char const *s, char c, size_t *len_words)
{
	char	*aux;
	size_t	l;

	aux = (char *)s;
	if (c == 0)
	{
		*len_words = ft_strlen((char *)s);
		return ;
	}
	while (*aux == c)
		aux++;
	if (!*aux)
		return ;
	l = 0;
	while (*aux)
	{
		if (*aux != c)
			l++;
		if (*aux == c && *(aux - 1) != c && l)
		{
			*len_words = l;
			l = 0;
			len_words++;
		}
		aux++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*aux;
	size_t	n_words;
	size_t	*len_words;
	int		i;

	if (!s)
		return (0);
	if (c == 0)
		n_words = 2;
	else
		n_words = ft_get_num_words(s, c);
	if (!n_words)
		return (0);
	printf("num_words : %lu\n\n", n_words);
	ret = ft_calloc(n_words, sizeof(char *));
	if (!ret)
		return (0);
	len_words = ft_calloc(n_words, sizeof(size_t));
	if (!len_words)
	{
		free(ret);
		return (0);
	}
	ft_get_len_words(s, c, len_words);	
	if (*len_words)
	{
	i = 0;
	aux = (char *)s;
	while (*aux == c)
		aux++;
	if (!*aux)
		return (0);
	while (i < n_words && *aux)
	{
		if (*aux != c)
		{
			ret[i] = ft_calloc(len_words[i] + 1, sizeof(char));
			printf("Auux is : %s and len_words  : %lu\n", aux, len_words[i]);
			if (!ret[i])
				return (0);
			if (ft_memcpy(ret[i], aux, len_words[i] + 1))
				aux += len_words[i];
			ret[i][len_words[i]] = '\0';
			printf("Ret %d es : %s\n", i, ret[i]);
			i++;
		}
		else
			aux++;
	}
	}
	ret[n_words - 1] = 0;
	printf("Ret %d es : %s\n", i, ret[i]);
	free(len_words);
	return (ret);
}

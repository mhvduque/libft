/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 22:53:49 by mhornero          #+#    #+#             */
/*   Updated: 2022/08/15 22:59:05 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		ret;
	t_list	*aux;

	if (!lst)
		return (0);
	ret = 0;
	aux = lst;
	while (aux)
	{
		ret++;
		aux = aux->next;
	}
	return (ret);
}

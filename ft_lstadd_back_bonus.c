/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero mhornero@student.42madrid.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 23:03:31 by mhornero          #+#    #+#             */
/*   Updated: 2022/08/16 03:43:18 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *e_new)
{
	t_list	*temp;

	if (!lst || !e_new)
		return ;
	if (*lst)
	{
		temp = ft_lstlast(*lst);
		if (!temp)
			return ;
		temp->next = e_new;
	}
	else
		*lst = e_new;
	return ;
}

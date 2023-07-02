/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:23:26 by arabelo-          #+#    #+#             */
/*   Updated: 2023/07/02 08:26:07 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;

	if (!lst)
		return ;
	curr = lst;
	while (curr)
	{
		f(curr->content);
		curr = curr->next;
	}
}

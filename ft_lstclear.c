/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:24:07 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:20:58 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_lstclear usuwa wszystkie elementy 
listy jednokierunkowej 
** i zwalnia ich pamięć, używając podanej 
funkcji del do zwolnienia zawartości (content).
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (lst && *lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

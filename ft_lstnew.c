/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:37:43 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/21 14:57:28 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(*elem));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

/*int main()
{
	// Test 1: Tworzenie elementu z liczbą
	int num = 42;
	t_list *node = ft_lstnew(&num);

	if (node && node->content == &num && node->next == NULL)
		printf("Test 1 Element created correctly with integer content.\n");
	else
		printf("Test 1 failed: Element not created correctly.\n");

	// Test 2: Tworzenie elementu z łańcuchem znaków
	char *str = "Hello, world!";
	t_list *node2 = ft_lstnew(str);

	if (node2 && node2->content == str && node2->next == NULL)
		printf("Test 2 Element created correctly with string content.\n");
	else
		printf("Test 2 failed: Element not created correctly.\n");

	// Test 3: Tworzenie elementu z wartością NULL
	t_list *node3 = ft_lstnew(NULL);

	if (node3 && node3->content == NULL && node3->next == NULL)
		printf("Test 3 passed: Element created correctly with NULL content.\n");
	else
		printf("Test 3 failed: Element not created correctly.\n");

	// Zwolnienie pamięci
	free(node);
	free(node2);
	free(node3);

	return (0);
}*/

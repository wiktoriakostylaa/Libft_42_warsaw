/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:48:33 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:24:43 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_strchr wyszukuje pierwsze wystąpienie znaku c w łańcuchu s.
** Jeśli znak c jest obecny, funkcja zwraca wskaźnik na jego 
pierwsze wystąpienie.
** Jeśli c to znak '\0', funkcja zwraca wskaźnik na koniec łańcucha.
** Jeśli znak c nie występuje w łańcuchu, funkcja zwraca NULL.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

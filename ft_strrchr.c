/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:13:48 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:22:09 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_strrchr wyszukuje ostatnie wystąpienie znaku c 
w łańcuchu s.
** Jeśli znak c zostanie znaleziony, funkcja zwraca wskaźnik 
na jego ostatnią pozycję w łańcuchu.
** Jeśli znak c nie zostanie znaleziony, funkcja zwraca NULL.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

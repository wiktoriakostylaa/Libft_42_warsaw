/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:43:30 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:25:02 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_strncmp porównuje dwa łańcuchy znaków s1 i s2 
przez maksymalnie n znaków.
** Jeśli łańcuchy różnią się, funkcja zwraca różnicę między 
pierwszymi różnymi znakami.
** Jeśli łańcuchy są równe przez n znaków lub do momentu 
napotkania znaku null ('\0'),
** funkcja zwraca 0.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

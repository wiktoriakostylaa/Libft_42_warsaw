/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:07 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:08:04 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_memset ustawia n bajtów w pamięci wskazanej przez s na wartość c.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int main()
{
	char napis[] = "jakis napis";   // kopiujemy napis do tablicy znakow
	ft_memset(napis, '*', 5);
	puts(napis);
	return (0);
}*/
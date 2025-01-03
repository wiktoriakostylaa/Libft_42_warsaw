/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:00:56 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:12:55 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_striteri stosuje funkcję f do każdego znaku łańcucha s, przekazując
** indeks oraz wskaźnik na każdy znak w łańcuchu.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/*void example_function(unsigned int index, char *c)
{
	if (index % 2 != 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32; // Zamiana na wielką literę
}*/

/*int main(void)
{
	char str[] = "abcdef";

	printf("Original string: %s\n", str);

	// Wywołanie ft_striteri z example_function
	ft_striteri(str, example_function);

	printf("Modified string: %s\n", str);

	return (0);
}*/
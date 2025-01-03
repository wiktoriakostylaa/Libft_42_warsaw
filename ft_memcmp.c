/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:23:38 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:23:47 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_memcmp porównuje pierwsze n bajtów pamięci 
wskazanych przez s1 i s2.
** Zwraca różnicę między pierwszymi różnymi bajtami, lub 0, jeśli bloków pamięci
** są identyczne przez n bajtów.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

/*int main() {
	// Testowe dane
	char str1[] = "Hello, World!";
	char str2[] = "Hello, World!";
	char str3[] = "Hello, C!";
	char str4[] = "Helloo, World!";

	// Test 1: Strony są identyczne
	printf("Test 1 (identical blocks):\n");
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 13));  // Powinno zwrócić 0
	printf("memcmp: %d\n", memcmp(str1, str2, 13));         
		// Powinno zwrócić 0
	printf("\n");

	// Test 2: Strony różne
	printf("Test 2 (different blocks):\n");
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str3, 13)); 
		// Powinno zwrócić liczbę różną od 0
	printf("memcmp: %d\n", memcmp(str1, str3, 13));       
		// Powinno zwrócić liczbę różną od 0
	printf("\n");

	// Test 3: Różne długości porównań
	printf("Test 3 (comparing part of the blocks):\n");
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 5));  
		// Powinno zwrócić 0 (porównanie tylko 'Hello')
	printf("memcmp: %d\n", memcmp(str1, str2, 5));         // Powinno zwrócić 0
	printf("\n");

	// Test 4: Różne bajty, ale dopiero po kilku pierwszych
	printf("Test 4 (different blocks after some identical bytes):\n");
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str4, 13)); 
		// Powinno zwrócić różnicę w 5-tym bajcie
	printf("memcmp: %d\n", memcmp(str1, str4, 13));       
		// Powinno zwrócić różnicę w 5-tym bajcie
	printf("\n");

	// Test 5: Porównanie krótkich bloków
	printf("Test 5 (compare short blocks):\n");
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str4, 6));  
		// Powinno zwrócić 0 (porównanie "Hello,")
	printf("memcmp: %d\n", memcmp(str1, str4, 6));         // Powinno zwrócić 0
	printf("\n");

	return (0);
}*/

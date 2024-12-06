/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:04:19 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/06 15:21:56 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (str[i] && i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return (str + i);
		}
		i++;
	}
	str = NULL;
	return (str);
}

/*int main() {
	// Testowe dane
	char str[] = "Hello, World!";
	char str2[] = "abcdefg";

	// Test 1: Znalazło bajt w napisie
	printf("Test 1 (byte found):\n");
	char *result1 = (char *)ft_memchr(str, 'o', 13); 
		// Powinno znaleźć 'o' w "Hello"
	if (result1) {
		printf("ft_memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str);
	} else {
		printf("ft_memchr: Nie znaleziono\n");
	}

	result1 = (char *)memchr(str, 'o', 13);
	if (result1) {
		printf("memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str);
	} else {
		printf("memchr: Nie znaleziono\n");
	}
	printf("\n");

	// Test 2: Bajt nie został znaleziony
	printf("Test 2 (byte not found):\n");
	result1 = (char *)ft_memchr(str, 'x', 13);  // Powinno nie znaleźć 'x'
	if (result1) {
		printf("ft_memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str);
	} else {
		printf("ft_memchr: Nie znaleziono\n");
	}

	result1 = (char *)memchr(str, 'x', 13);
	if (result1) {
		printf("memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str);
	} else {
		printf("memchr: Nie znaleziono\n");
	}
	printf("\n");

	// Test 3: Szukanie w krótszej długości
	printf("Test 3 (search within part of the string):\n");
	result1 = (char *)ft_memchr(str, 'W', 7);  // Powinno znaleźć 'W' w "World"
	if (result1) {
		printf("ft_memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str);
	} else {
		printf("ft_memchr: Nie znaleziono\n");
	}

	result1 = (char *)memchr(str, 'W', 7);
	if (result1) {
		printf("memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str);
	} else {
		printf("memchr: Nie znaleziono\n");
	}
	printf("\n");

	// Test 4: Szukanie w napisie, w którym bajt występuje w pierwszej pozycji
	printf("Test 4 (search for first byte):\n");
	result1 = (char *)ft_memchr(str2, 'a', 7); 
		// Powinno znaleźć 'a' w pierwszej pozycji
	if (result1) {
		printf("ft_memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str2);
	} else {
		printf("ft_memchr: Nie znaleziono\n");
	}

	result1 = (char *)memchr(str2, 'a', 7);
	if (result1) {
		printf("memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str2);
	} else {
		printf("memchr: Nie znaleziono\n");
	}
	printf("\n");

	// Test 5: Szukanie w napisie, w którym bajt występuje na końcu
	printf("Test 5 (search for last byte):\n");
	result1 = (char *)ft_memchr(str2, 'g', 7); 
		// Powinno znaleźć 'g' w ostatniej pozycji
	if (result1) {
		printf("ft_memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str2);
	} else {
		printf("ft_memchr: Nie znaleziono\n");
	}

	result1 = (char *)memchr(str2, 'g', 7);
	if (result1) {
		printf("memchr: Znalazłem '%c' w pozycji: %ld\n", *result1, result1
			- str2);
	} else {
		printf("memchr: Nie znaleziono\n");
	}

	return (0);
}*/
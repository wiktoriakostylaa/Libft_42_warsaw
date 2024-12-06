/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:33:45 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/06 17:23:11 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little || !big)
		return (NULL);
	if (!little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && i + j < len && big[i + j] == little[j])
		{
			j++;
		}
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

/*int main() {
	// Testowe dane
	char haystack[] = "Hello, World!";
	char needle1[] = "World";
	char needle2[] = "C";
	char needle3[] = "Hello, World!";
	char needle4[] = "o, W";

	// Test 1: Znalezienie frazy w ciągu
	printf("Test 1 (found):\n");
	char *result1 = ft_strnstr(haystack, needle1, 13);
		// Powinno znaleźć "World"
	if (result1) {
		printf("ft_strnstr: Znalazłem '%s' w pozycji: %ld\n", result1, result1
			- haystack);
	} else {
		printf("ft_strnstr: Nie znaleziono\n");
	}
	printf("\n");

	// Test 2: Fraza nieznaleziona
	printf("Test 2 (not found):\n");
	result1 = ft_strnstr(haystack, needle2, 13);  // Powinno nie znaleźć "C"
	if (result1) {
		printf("ft_strnstr: Znalazłem '%s' w pozycji: %ld\n", result1, result1
			- haystack);
	} else {
		printf("ft_strnstr: Nie znaleziono\n");
	}
	printf("\n");

	// Test 3: Porównanie z pełnym ciągiem
	printf("Test 3 (full string match):\n");
	result1 = ft_strnstr(haystack, needle3, 13);
		// Powinno znaleźć pełny ciąg "Hello, World!"
	if (result1) {
		printf("ft_strnstr: Znalazłem '%s' w pozycji: %ld\n", result1, result1
			- haystack);
	} else {
		printf("ft_strnstr: Nie znaleziono\n");
	}
	printf("\n");

	// Test 4: Porównanie z częściowym ciągiem
	printf("Test 4 (partial match):\n");
	result1 = ft_strnstr(haystack, needle4, 13);  // Powinno znaleźć "o, W"
	if (result1) {
		printf("ft_strnstr: Znalazłem '%s' w pozycji: %ld\n", result1, result1
			- haystack);
	} else {
		printf("ft_strnstr: Nie znaleziono\n");
	}
	printf("\n");

	// Test 5: Porównanie z ograniczoną długością (nie w całości)
	printf("Test 5 (partial match with length limitation):\n");
	result1 = ft_strnstr(haystack, needle4, 5);  // Powinno nie znaleźć "o,
		W" (porównujemy tylko pierwsze 5 znaków)
	if (result1) {
		printf("ft_strnstr: Znalazłem '%s' w pozycji: %ld\n", result1, result1
			- haystack);
	} else {
		printf("ft_strnstr: Nie znaleziono\n");
	}
	printf("\n");

	return (0);
}*/
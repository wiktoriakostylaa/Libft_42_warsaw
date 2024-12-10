/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:43:33 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/07 17:40:43 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(s);
	dup = (char *)malloc(size * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);
	dup[size] = '\0';
	return (dup);
}

/*int main() {
	// Test 1: Standardowe skopiowanie łańcucha znaków
	const char* str1 = "Hello, world!";
	char* copy1 = ft_strdup(str1);
	if (copy1 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 1)\n");
		return (1);
	}

	// Sprawdzamy, czy skopiowany łańcuch jest taki sam jak oryginał
	if (strcmp(str1, copy1) != 0) {
		printf("Błąd! Skopiowany łańcuch nie jest identyczny z oryginałem\n");
		free(copy1);
		return (1);
	}

	printf("Test 1 przeszedł pomyślnie! (Skopiowany łańcuch: '%s')\n", copy1);
	free(copy1);

	// Test 2: Skopiowanie pustego łańcucha
	const char* str2 = "";
	char* copy2 = ft_strdup(str2);
	if (copy2 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 2)\n");
		return (1);
	}

	// Sprawdzamy, czy skopiowany łańcuch jest również pusty
	if (strcmp(str2, copy2) != 0) {
		printf("Błąd! Skopiowany łańcuch nie jest pusty jak oryginał\n");
		free(copy2);
		return (1);
	}

	printf("Test 2 przeszedł pomyślnie! (Skopiowany łańcuch: '%s')\n", copy2);
	free(copy2);

	// Test 3: Skopiowanie bardzo długiego łańcucha
	const char* str3 = "A very long string with lots of characters
				to test the function's handling of larger inputs.";
	char* copy3 = ft_strdup(str3);
	if (copy3 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 3)\n");
		return (1);
	}

	// Sprawdzamy, czy skopiowany łańcuch jest taki sam jak oryginał
	if (strcmp(str3, copy3) != 0) {
		printf("Błąd! Skopiowany łańcuch nie jest identyczny z oryginałem\n");
		free(copy3);
		return (1);
	}

	printf("Test 3 przeszedł pomyślnie! (Skopiowany łańcuch: '%s')\n", copy3);
	free(copy3);

	return (0);
}*/
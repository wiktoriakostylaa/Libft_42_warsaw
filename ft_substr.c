/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:12:05 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/13 16:31:52 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	j = 0;
	if (substr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

/*int main() {
	// Test 1: Normalny przypadek, podłańcuch od 7. znaku o długości 5
	const char *str1 = "Hello, world!";
	char *substr1 = ft_substr(str1, 7, 5);
	if (substr1 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 1)\n");
		return (1);
	}
	printf("Test 1: '%s' (oczekiwany wynik: 'world')\n", substr1);
	free(substr1);  // Zwolnienie pamięci po użyciu

	// Test 2: Przypadek, gdzie start jest większy niż długość łańcucha
	const char *str2 = "Hello";
	char *substr2 = ft_substr(str2, 10, 5);
	if (substr2 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 2)\n");
		return (1);
	}
	printf("Test 2: '%s' (oczekiwany wynik: '')\n", substr2);
	free(substr2);

	// Test 3: Start w środku łańcucha,
		ale długość mniejsza niż długość reszty łańcucha
	const char *str3 = "ABCDEFGHI";
	char *substr3 = ft_substr(str3, 3, 4);
	if (substr3 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 3)\n");
		return (1);
	}
	printf("Test 3: '%s' (oczekiwany wynik: 'DEFG')\n", substr3);
	free(substr3);

	// Test 4: Start = 0 i len > długość łańcucha
	const char *str4 = "Short";
	char *substr4 = ft_substr(str4, 0, 10);
	if (substr4 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 4)\n");
		return (1);
	}
	printf("Test 4: '%s' (oczekiwany wynik: 'Short')\n", substr4);
	free(substr4);

	// Test 5: Skrajny przypadek - pusty łańcuch wejściowy
	const char *str5 = "";
	char *substr5 = ft_substr(str5, 0, 5);
	if (substr5 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 5)\n");
		return (1);
	}
	printf("Test 5: '%s' (oczekiwany wynik: '')\n", substr5);
	free(substr5);

	// Test 6: Skrajny przypadek - start == 0 i len == 0
	const char *str6 = "Hello";
	char *substr6 = ft_substr(str6, 0, 0);
	if (substr6 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 6)\n");
		return (1);
	}
	printf("Test 6: '%s' (oczekiwany wynik: '')\n", substr6);
	free(substr6);

	return (0);
}*/

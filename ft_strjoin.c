/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:41:19 by wkostyla          #+#    #+#             */
/*   Updated: 2024/12/07 19:11:24 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		i;
	int		j;

	strjoin = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!strjoin)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		strjoin[i] = s2[j];
		i++;
		j++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}

/*int main() {
	// Test 1: Normalne łączenie dwóch łańcuchów
	const char *str1 = "Hello, ";
	const char *str2 = "world!";
	char *result1 = ft_strjoin(str1, str2);
	if (result1 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 1)\n");
		return (1);
	}
	printf("Test 1: '%s' (oczekiwany wynik: 'Hello, world!')\n", result1);
	free(result1);

	// Test 2: Łączenie pustego łańcucha z innym łańcuchem
	const char *str3 = "";
	const char *str4 = "world!";
	char *result2 = ft_strjoin(str3, str4);
	if (result2 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 2)\n");
		return (1);
	}
	printf("Test 2: '%s' (oczekiwany wynik: 'world!')\n", result2);
	free(result2);

	// Test 3: Łączenie dwóch pustych łańcuchów
	const char *str5 = "";
	const char *str6 = "";
	char *result3 = ft_strjoin(str5, str6);
	if (result3 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 3)\n");
		return (1);
	}
	printf("Test 3: '%s' (oczekiwany wynik: '')\n", result3);
	free(result3);

	// Test 4: Łączenie bardzo długich łańcuchów
	const char *str7 = "A very long string, ";
	const char *str8 = "followed by more characters!";
	char *result4 = ft_strjoin(str7, str8);
	if (result4 == NULL) {
		printf("Błąd! Alokacja pamięci nie powiodła się (Test 4)\n");
		return (1);
	}
	printf("Test 4: '%s' (oczekiwany wynik: 'A very long string,
	followed by more characters!')\n", result4);
	free(result4);

	return (0);
}*/
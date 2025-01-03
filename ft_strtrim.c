/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:28:16 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:23:12 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_strtrim usuwa znaki z początku i końca łańcucha s1, 
które znajdują się w zbiorze set.
** Zwraca nowy łańcuch, w którym nie ma znaków z set na początku i końcu s1.
** Jeśli nie uda się przydzielić pamięci, funkcja zwraca NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	strtrim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!strtrim)
		return (NULL);
	i = 0;
	while (start < end)
		strtrim[i++] = s1[start++];
	strtrim[i] = '\0';
	return (strtrim);
}

/*int main()
{
	// Test 1: Przycina spacje z początku i końca
	char *str1 = "  Hello World!  ";
	char *set1 = " ";
	char *result1 = ft_strtrim(str1, set1);
	printf("Test 1 - Expected: 'Hello World!', Result: '%s'\n", result1);
	free(result1);

	// Test 2: Przycina znaki '*' z początku i końca
	char *str2 = "**Hello World!**";
	char *set2 = "*";
	char *result2 = ft_strtrim(str2, set2);
	printf("Test 2 - Expected: 'Hello World!', Result: '%s'\n", result2);
	free(result2);

	// Test 3: Brak znaków do przycięcia, powinno pozostać "abcdef"
	char *str3 = "abcdef";
	char *set3 = "xyz";
	char *result3 = ft_strtrim(str3, set3);
	printf("Test 3 - Expected: 'abcdef', Result: '%s'\n", result3);
	free(result3);

	// Test 4: Przycina wszystkie znaki z początku i końca
	char *str4 = "****";
	char *set4 = "*";
	char *result4 = ft_strtrim(str4, set4);
	printf("Test 4 - Expected: '', Result: '%s'\n", result4);
	free(result4);

	// Test 5: Pusty łańcuch, nic do przycięcia, wynik powinien być pusty
	char *str5 = "";
	char *set5 = " ";
	char *result5 = ft_strtrim(str5, set5);
	printf("Test 5 - Expected: '', Result: '%s'\n", result5);
	free(result5);

	return (0);
}*/

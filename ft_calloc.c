/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:10:59 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 13:51:56 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Funkcja ft_calloc alokuje pamięć dla tablicy złożonej z nmemb elementów, 
z których każdy ma rozmiar size, i zeruje przydzieloną pamięć.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	if (total / nmemb != size)
		return (NULL);
	ptr = (void *)malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

/*int main() {
	// Test 1: Alokacja pamięci dla 5 elementów typu int
	int* arr = (int*)ft_calloc(5, sizeof(int));
	if (arr == NULL) {
		printf("Alokacja pamięci nie powiodła się (Test 1)\n");
		return (1);
	}

	// Sprawdzanie, czy pamięć jest zainicjowana na 0
	for (size_t i = 0; i < 5; i++) {
		if (arr[i] != 0) {
			printf("Błąd! Pamięć nie została zainicjowana na 0 (Test 1)\n");
			return (1);
		}
	}

	printf("Test 1 przeszedł pomyślnie!\n");

	// Test 3: Przypadek dużej alokacji (np. 1 miliard elementów)
	size_t large_size = 1000000000;  // Duża liczba elementów
	int* large_arr = (int*)ft_calloc(large_size, sizeof(int));
	if (large_arr == NULL) {
		printf("Błąd! Alokacja dużej ilości pamięci nie powiodła się\n");
		return (1);
	}

	// Sprawdzanie, czy pamięć jest zainicjowana na 0 dla dużej alokacji
	if (large_arr[0] != 0) {
		printf("Błąd! Pamięć nie została zainicjowana na 0 dla dużej alokacji");
		return (1);
	}

	printf("Test 3 przeszedł pomyślnie!");

	// Zwolnienie zaalokowanej pamięci
	free(arr);
	free(large_arr);

	return (0);
}*/
